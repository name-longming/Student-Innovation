#include "student.h"
#include <QDebug>
#pragma execution_character_set("utf-8")

student::student(QObject *parent) : QObject(parent)
{

}

void student::treat()
{
    qDebug()<<"请老师吃饭";
}

void student::treat(QString foodName)
{
    qDebug() << "请老师吃饭,老师吃:" << foodName ;
}
