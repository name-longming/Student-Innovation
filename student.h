#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class student : public QObject
{
    Q_OBJECT
public:
    explicit student(QObject *parent = nullptr);
    void treat();

    void treat(QString foodName);
signals:

};

#endif // STUDENT_H
