import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Dialogs 1.2
import com.gb.SavingTask 1.0


Window {
property int amountTasks : 0
property string newtableline : 'TaskElement{width:800; height:30;'
function loadnext () {
    saving.getNext();
}

Saving {
    id: saving
    onStatusLoadBase: {
        if (correct == false ) {
            Qt.quit()
            console.log(error)
        }
        if (amount > 0 ) {
            loadnext()
        }
    }
    onLogMistake : {
        console.log(msg)
    }
    onPrintData : {
        var itog = newtableline + 'taskTxt:"' + task + '";begTxt:"' + begDate + '";prgTxt:"' + progress + '%"; y:' + amountTasks * 25 + ';idt:' + id + ';dbsaving:saving' + '}' ;
        console.log(itog)
        Qt.createQmlObject(itog, table, "lineTask" + amountTasks++)
        getNext()
    }
    onEmitNextLine : getNext() // Добавление нового компонента

}

visible : true
width : 640
height : 480
title : qsTr( "Task Manager" )
Component.onCompleted : {
    table.width = width
    table.height = height - 50 ;
    rect.width = width
    rect.height = 50 ;
    rect.y = height - 50
    rect2.width = width
    rect2.height = 50 ;
    rect2.y = height - 100
}

ScrollView {
    id:table
    width : 600
    ScrollBar.horizontal.policy : ScrollBar.AlwaysOff
    ScrollBar.vertical.policy : ScrollBar.AlwaysOn
}

Rectangle {
    id: rect
    height : 30

    My_Button {
        id:_addButton
        text : qsTr("      Добавить      ")
        onClicked : {
            console.log( "THIS" )
            var component = Qt.createComponent( "qrc:///NewTask.qml" )
            console.log(component)
            var obj = component.createObject(NewTask)
            console.log(obj)
            obj.baseSaving = saving
            obj.show()
        }
    }
}

Rectangle {
    id: rect2
    height : 30

    My_Button {
        id:_openButton
        text : qsTr("      Отобразить      ")
        onClicked : {
                saving.initBase(); // Загрузка базы заданий

        }
    }
}

}
