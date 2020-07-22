import QtQuick 2.0

BorderImage {
    property alias text: _txt.text
    property bool clicked

    source: "qrc:///img/img/press.png"
    width: _txt.width + 15
    height: _txt.height + 15
    border.left: 5
    border.top: 2
    border.right: 5
    border.bottom: 2


    Text {
        id: _txt
        color: "red"
        anchors.centerIn: parent
    }

    //Действие мыши
    MouseArea{
        anchors.fill: parent

        onPressed: {
            parent.source = "qrc:///img/img/unpress.png"
            parent.clicked = true
        }
        onReleased: {
            parent.source = "qrc:///img/img/press.png"
            parent.clicked = false

        }
    }
}
