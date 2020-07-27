import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick 2.13
import QtQuick.Layouts 1.13
import com.gb.SavingTask 1.0

Item {
    id: _rootItem
    property string taskTxt : "task" ;
    property string begTxt : "b" ;
    property string prgTxt : "p" ;
    property Saving dbsaving : null
    property int idt : 0

    Rectangle {
        id: rect
        anchors.fill : parent
        color : '#eeeee4'
    }
    Component.onCompleted : // По факту загрузки компонентов разделим таблицу на колонки равной ширины
    {
        width = parent.width;
        height = 25
        taskText.width = parent .width / 4 ;
        startText.width = parent .width / 4 ;
        progText.width = parent .width / 4 ;
        var p = 0 ;
        taskText.x = p;
        p += taskText.width
        startText.x = p;
        p += taskText.width
        progText.x = p;
    }

    TextEdit {
        id: taskText
        text: qsTr("Название: " + taskTxt)
    }

    TextEdit {
        id: startText
        text: qsTr("Дата: " + begTxt)
    }

    Label {
        id: progText
        text: qsTr("Прогресс: " + prgTxt)
    }

    MouseArea {
    anchors.fill: parent
    onClicked: {
        dbsaving.getLine(idt)
        console.log(idt)
    }
    }
}
