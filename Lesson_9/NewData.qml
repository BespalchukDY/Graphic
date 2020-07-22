import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5


Rectangle
{
    id:mainrect
    x: 0
    y: 0

    property string t_id: ""
    property string task: ""
    property string date_end: ""
    property string prog: ""

    Rectangle {
        id: t_id_rect
        visible: false
        width: 10
        height: t_task_rect.height
        color: "#ffffff"
        border.color: "#040404"

        TextField {
            id: textEdit
            anchors.centerIn: parent
            width: 10
            wrapMode: Text.WrapAnywhere
            height: t_task_rect.height
            text: t_id
            font.pixelSize: 12
            validator: RegExpValidator { regExp: /[0-9]+/ }
        }
    }

    Rectangle {
        id: t_task_rect
        anchors.left: t_id_rect.right
        width: 250
        height: textEdit1.height + 30
        color: "#ffffff"
        border.color: "#040404"

        TextEdit {
            id: textEdit1
            anchors.centerIn: parent
            width: 250
            wrapMode: Text.WrapAnywhere
            height: contentHeight
            text: task
            textMargin: 3
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: t_datee_rect
        anchors.left: t_task_rect.right
        width: 120
        height: t_task_rect.height
        color: "#ffffff"
        border.color: "#040404"

        TextField {
            id: textEdit4
            anchors.centerIn: parent
            width: 120
            wrapMode: Text.WrapAnywhere
            height: t_task_rect.height
            text: date_end
            placeholderText: "dd.mm.yyyy"
            font.pixelSize: 12
            validator: RegExpValidator { regExp: /^([0-2]?[1-9]|3[0-9]).(0?[1-9]|1[0-9]).([0-9][0-9][0-9][0-9])$/ }
        }
    }

    Rectangle {
        id: t_prog_rect
        anchors.left: t_datee_rect.right
        width: 100
        height: t_task_rect.height
        color: "#ffffff"
        border.color: "#040404"

        TextField {
            id: textEdit5
            anchors.centerIn: parent
            width: 100
            wrapMode: Text.WrapAnywhere
            height: t_task_rect.height
            text: prog
            placeholderText: "0 - 10"
            font.pixelSize: 12
            validator: RegExpValidator { regExp: /^[0-9]?$|^10$/ }
        }
    }
}
