#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "student.h"
#include "teacher.h"

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

    Teacher * zt;
    student * st;

    void classIsOver();
};
#endif // MYWIDGET_H
