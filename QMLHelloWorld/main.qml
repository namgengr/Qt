import QtQuick
import QtQuick.Window

Window {
    width: 200
    height: 200
    visible: true
    color: "yellow"

    MouseArea {
        anchors.fill: parent
        onClicked:  {
            Qt.quit();
        }
    }

    Text {
        id: text1
        text: qsTr("Hello World")
        font.pointSize: 20
        anchors.centerIn: parent
    }

    //title: qsTr("Hello World")
}
