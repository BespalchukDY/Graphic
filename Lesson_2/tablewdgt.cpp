#include "tablewdgt.hpp"

/*
*Создать таблицу со столбцами: №, Имя компьютера, IP адрес, MAC адрес. Заполнить таблицу данными. Предусмотреть
возможность нескольких строк в таблице (они могут идти не подряд). Для выделенных строк, по нажатию на кнопку покрасить
задний фон в другой цвет.
*/

tablewdgt::tablewdgt()
{
    QStringList name_table;
    name_table << "№" << "Имя компьютера" << "IP адрес" << "MAC адрес";
}
