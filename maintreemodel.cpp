#include "maintreemodel.h"
#include "menu.h"
#include "itemfileopen.h"
#include "serialization.h"
#include <fstream>

#include "vectory.cpp"

MainTreeModel::MainTreeModel(QObject *parent)
    : QAbstractItemModel(parent)
{
    RootComponent = nullptr;
//    RootComponent = new Menu("Menu główne");
    load();
}

MainTreeModel::~MainTreeModel()
{
    save();
    delete RootComponent;
}

QVariant MainTreeModel::headerData(int, Qt::Orientation, int) const
{
    return QVariant();
}

QModelIndex MainTreeModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeComponent *parentItem;

    if (!parent.isValid())
        parentItem = RootComponent;
    else
        parentItem = static_cast<TreeComponent*>(parent.internalPointer());

    TreeComponent *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex MainTreeModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    TreeComponent *childItem = static_cast<TreeComponent*>(index.internalPointer());
    TreeComponent *parentItem = childItem->parent();

    if (parentItem == RootComponent || parentItem == nullptr)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int MainTreeModel::rowCount(const QModelIndex &parent) const
{
    TreeComponent *parentItem;
/*
    if (parent.column() > 0)
        return 0;
*/
    if (!parent.isValid())
        parentItem = RootComponent;
    else
        parentItem = static_cast<TreeComponent*>(parent.internalPointer());

    return parentItem->childCount();
}

int MainTreeModel::columnCount(const QModelIndex &parent) const
{
    return 1;
    if (!parent.isValid())
        return RootComponent->columnCount();
    else
        return static_cast<TreeComponent*>(parent.internalPointer())->columnCount();
}

QVariant MainTreeModel::data(const QModelIndex &index, int role) const
{
   // qDebug() << "index passed:" << index;
    if (!index.isValid())
        return QVariant();
/*
    if (role != Qt::DisplayRole)
        return QVariant();
*/
    TreeComponent *item = static_cast<TreeComponent*>(index.internalPointer());

    return item->data(role);
}

Qt::ItemFlags MainTreeModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEditable | QAbstractItemModel::flags(index);
}

bool MainTreeModel::insertMenu(const QString& title, const QModelIndex &parent)
{
    TreeComponent *parentItem = getItem(parent);
    int pos = parentItem->childCount();
    beginInsertRows(parent, pos, pos);
    parentItem->add(new Menu(title, parentItem));
    endInsertRows();
    return true;
}

bool MainTreeModel::insertItem(const QString& title, const QModelIndex &parent)
{
    TreeComponent *parentItem = getItem(parent);
    int pos = parentItem->childCount()-1;
    pos = pos < 0 ? 0 : pos;
    beginInsertRows(parent, pos, pos);
    parentItem->add(new ItemFileOpen(title, "", parentItem));
    endInsertRows();
    return true;
}

void MainTreeModel::save()
{
    std::ofstream ofs("layout.xml");
    assert(ofs.good());
    q_xml_oarchive oa(ofs);
    oa << BOOST_SERIALIZATION_NVP(RootComponent);
}

void MainTreeModel::load()
{
    if(RootComponent != nullptr)
        delete RootComponent;

    std::ifstream ifs("layout.xml");
    assert(ifs.good());
    q_xml_iarchive ia(ifs);
    ia >> BOOST_SERIALIZATION_NVP(RootComponent);
    assert(RootComponent);
}

void MainTreeModel::generateSampleTree()
{
    std::vector<std::vector<std::string> > menu_items;
    std::vector<std::vector<std::vector<std::string> > > div;
    std::vector<std::vector<std::vector<std::string> > > pliki;
    vectory(menu_items, div, pliki);
#ifndef PRINT
    qDebug() << "menu_items:";
    for(uint i=0; i < menu_items.size(); ++i)
        for(uint j=0; j<menu_items[i].size(); ++j)
            qDebug() << QString("[%1][%2] %3").arg(i).arg(j).arg(QString::fromStdString(menu_items[i][j]));
    qDebug() << "div:";
    for(uint i=0; i < div.size(); ++i)
        for(uint j=0; j<div[i].size(); ++j)
            for(uint k=0; k<div[i][j].size(); ++k)
                qDebug() << QString("[%1][%2][%3] %4").arg(i).arg(j).arg(k).arg(QString::fromStdString(div[i][j][k]));
    qDebug() << "pliki:";
    for(uint i=0; i < pliki.size(); ++i)
        for(uint j=0; j<pliki[i].size(); ++j)
            for(uint k=0; k<pliki[i][j].size(); ++k)
                qDebug() << QString("[%1][%2][%3] %4").arg(i).arg(j).arg(k).arg(QString::fromStdString(pliki[i][j][k]));
#endif
    RootComponent = new Menu(tr("Main Menu"));
    for(uint i=1; i<6; ++i)
    {
        if(i < 4) RootComponent->add(new ItemFileOpen(QString::fromLocal8Bit(menu_items[0][i].c_str())));
        else RootComponent->add(new Menu(QString::fromLocal8Bit(menu_items[0][i].c_str())));
    }
}

QHash<int, QByteArray> MainTreeModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[nodeNameRole] = "nodeName";
    return roles;
}

void MainTreeModel::invokeAction(const QModelIndex &index) const
{
    static_cast<TreeComponent*>(index.internalPointer())->action();
}

QString MainTreeModel::sectionName(const QModelIndex &index) const
{
    //qDebug() << static_cast<TreeComponent*>(index.internalPointer())->title();
    if(!index.isValid())
        return QString();
    return static_cast<TreeComponent*>(index.internalPointer())->title();
}

TreeComponent *MainTreeModel::getItem(const QModelIndex &index) const
{
    if (index.isValid()) {
        TreeComponent *item = static_cast<TreeComponent*>(index.internalPointer());
        if (item)
            return item;
    }
    return RootComponent;
}
