import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick 2.13
import QtQuick.Layouts 1.13
import com.gb.SavingTask 1.0

Window {
    property Saving baseSaving : null // Класс работы с БД
    width: 800
    height: 300
    id: _dlg

    Rectangle {
        color: 'aliceblue'
        anchors.fill: _task
    }

    Label {
        id:_tasklabel
        x: 0
        y: 10
        text: qsTr("Задача")
    }

    TextEdit {
        id: _task
        width: 200
        height: 20
        x: 50
        y: 10
    }

    Label {
        x: 0
        y: 180
        text: qsTr("Дата")
    }

    TextEdit {
        id: _beg
        x: 60
        y: 180
        text: "dd.mm.yyyy"
    }

    Label {
        x : 0
        y : 250

        text : qsTr("Прогресс: ")
    }

    TextField {
        id: _prg
        x : 100
        y : 240
        placeholderText: qsTr("от 0 до 10")
        validator: RegExpValidator{regExp: /^(0|1|2|3|4|5|6|7|8|9|10)$/}
    }

    Component.onCompleted : {
        _addline.x = width - _addline.width
        _addline.y = height - _addline.height
        var date = new Date
        _beg.text = Qt.formatDate(date , "dd.MM.yyyy" );
    }

    My_Button {
        id:_addline
        text : qsTr("Добавить")
        height : 30
        y : 0
        x : 700
        width : 100

        onClicked : {
            var begDate = _beg.selectedDate
            baseSaving.addNew(_task.text, _beg.text, _prg.text);
            _dlg.close()
        }
    }
}
