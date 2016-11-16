import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import Qt.labs.folderlistmodel 2.1
Item {
    id: browser
//    property alias path: view.path
    width: 300
    height: 200
    ListView {
        id: view
    //    property var colors: ["white","#E0FFE0","white","#EEEEFF" ]
    //    property string path
//        property var currentNode: model.root
        anchors.fill: parent
        model: mainModel /* FolderListModel {
            id: folder
            folder: view.path
        }*/
        delegate: FileDelegate { }
      //  delegate: Text { text: nodeName }
        headerPositioning: ListView.OverlayHeader
        header: Rectangle {
            width: browser.width
            height: 34
            color: "yellow"
            z:2
            Row {
                anchors.fill: parent
                Button {
                    width:32
                    height :32
                    text: "<<<"
  //                  onClicked: view.currentNode = currentNode.parentNode//view.path = folder.parentFolder
                }
                Text {
   //                 text: currentNode.title //view.path
                    anchors.verticalCenter: parent.verticalCenter
                }
            }
        }
        /*
        footerPositioning: ListView.OverlayHeader
        footer: Rectangle {
            width: browser.width
            height: 34
            color: "yellow"
            z:2
            Row {
                anchors.fill: parent
                Text {
                    text: "["+folder.count+" Files]"
                    anchors.verticalCenter: parent.verticalCenter
                }
            }
        }*/
    }
}
