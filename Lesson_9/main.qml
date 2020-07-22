import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.12
import com.vv.exampleclass 1.0

/*
1. Создать программу-органайзер, в которую можно будет вводить задачи. Каждая задача состоит из следующих пунктов:
    * название задачи
    * дата окончания выполнения задачи (дедлайн - в формате dd.mm.yyyy)
    * текущий прогресс (число от 0 до 10)
С помощью QML создать графический интерфейс программы для ввода данных и кнопку для записи задачи.
Предусмотреть возможность при закрытии программы сохранения всех введенных пользователем задач в файл, а при открытии подгрузить данные из файла. Последующие задачи дозаписывать в уже существующий файл. Отображать задачи в программе не надо.
2. *Создать пользовательский виджет - кнопку в отдельном файле. Использовать эту кнопку в первом задании.
*/

Window {
    id:root
    visible: true
    width: 900
    height: 500
    title: qsTr("Tasks")

    property string ns: 'NewData{width:700; height:100;}'
    property string ts: 'NewData{width:700; height:100;'
    property int num: 0

    ScrollView {
        ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
        ScrollBar.vertical.policy: ScrollBar.AlwaysOn
        anchors.fill: parent
        Component.onCompleted:
        {
            loader.loadBase()
        }
        ColumnLayout {
            id:list
            y:35
        }
    }

    BaseReader{
        id : loader
        onInitEnd:
        {
            if (succeed) {
                loader.getNextRecord()
                Qt.createQmlObject(ns, list, "objdata")
            } else {
                Qt.quit()
            }
        }
        onLoad: {
            var total = ts + 't_id:"' + id + '";task:"' + task + '";date_end:"' + date_end + '";prog:"' + prog + '";}'
            Qt.createQmlObject(total, list, "obj" + (++num))
            loader.getNextRecord()
        }
    }

    Rectangle {
        id: id_rect
        visible: false
        width: 10
        height: 50
        color: "#ffffff"
        border.color: "#040404"

        Text {
            id: id_label
            height: contentHeight
            anchors.centerIn: parent
            text: qsTr("ID")
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: task_rect
        anchors.left: id_rect.right
        width: 250
        height: 50
        color: "#ffffff"
        border.color: "#040404"

        Text {
            id: task_label
            anchors.centerIn: parent
            text: qsTr("Задача")
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: dateend_rect
        anchors.left: task_rect.right
        width: 120
        height: 50
        color: "#ffffff"
        border.color: "#040404"

        Text {
            id: dateend_label
            anchors.centerIn: parent
            text: qsTr("Срок\nвыполнения")
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: progress_rect
        anchors.left: dateend_rect.right
        width: 100
        height: 50
        color: "#ffffff"
        border.color: "#040404"

        Text {
            id: progress_label
            anchors.centerIn: parent
            text: qsTr("Прогресс")
            font.pixelSize: 12
        }
    }

    My_Button{
        id:addData
        text: qsTr("Добавить")
        anchors.leftMargin: 20
        anchors.left: progress_rect.right
        Component.onCompleted: {
            width = 135
            height = 135
        }

        onClickedChanged:
        {

           var data_id = list.data[num].data[0].data[0].text
           var data_task = list.data[num].data[1].data[0].text
           var data_dateend = list.data[num].data[2].data[0].text
           var data_prog = list.data[num].data[3].data[0].text
           loader.writeNewInformation(data_id,data_task,data_dateend,data_prog)
           Qt.createQmlObject(ns, list, "objdata")
           num++
        }
    }

    My_Button{
        id:rewriteData
        text: qsTr("Перезаписать")
        anchors.leftMargin: 20
        anchors.left: addData.right
        Component.onCompleted: {
            width = 135
            height = 135
        }
        onClickedChanged:
        {
            loader.rewriteFile()
            for (var i = 0; i < num;i++)
            {
                var data_id = list.data[i].data[0].data[0].text
                var data_task = list.data[i].data[1].data[0].text
                var data_dateend = list.data[i].data[2].data[0].text
                var data_prog = list.data[i].data[3].data[0].text
                loader.writeNewInformation(data_id,data_task,data_dateend,data_prog)
            }
        }
    }
}
