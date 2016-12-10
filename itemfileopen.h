#ifndef ITEMPDF_H
#define ITEMPDF_H

#include "treecomponent.h"
#include <QString>
#include <QDebug>

class ItemFileOpen : public TreeComponent
{
public:
    explicit ItemFileOpen();
    ItemFileOpen(QString title, QString fileName, TreeComponent* parent);
    virtual void action();

protected:
    QString FileName;

    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        Q_UNUSED(version)
        ar & BOOST_SERIALIZATION_BASE_OBJECT_NVP(TreeComponent);
        ar & BOOST_SERIALIZATION_NVP(FileName);
        //qDebug() << "serializing itempdf:" << m_title;
    }
};

BOOST_CLASS_EXPORT_KEY(ItemFileOpen)

#endif // ITEMPDF_H