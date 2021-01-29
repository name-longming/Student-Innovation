/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interface
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuTimi_liao;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *interface)
    {
        if (interface->objectName().isEmpty())
            interface->setObjectName(QString::fromUtf8("interface"));
        interface->resize(767, 421);
        centralwidget = new QWidget(interface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 50, 111, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 50, 221, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 71, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setMargin(2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 50, 71, 31));
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setMargin(2);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(450, 50, 91, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(120, 120, 531, 81));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 81, 31));
        label_3->setFont(font);
        label_3->setMargin(2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 260, 81, 31));
        label_4->setFont(font);
        label_4->setMargin(2);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(120, 240, 461, 101));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(582, 240, 71, 101));
        interface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(interface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 767, 26));
        menuTimi_liao = new QMenu(menubar);
        menuTimi_liao->setObjectName(QString::fromUtf8("menuTimi_liao"));
        interface->setMenuBar(menubar);
        statusbar = new QStatusBar(interface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        interface->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuTimi_liao->menuAction());

        retranslateUi(interface);

        QMetaObject::connectSlotsByName(interface);
    } // setupUi

    void retranslateUi(QMainWindow *interface)
    {
        interface->setWindowTitle(QCoreApplication::translate("interface", "interface", nullptr));
        pushButton->setText(QCoreApplication::translate("interface", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("interface", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("interface", "\346\216\245\346\224\266\347\253\257\345\217\243\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("interface", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label_4->setText(QCoreApplication::translate("interface", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        pushButton_2->setText(QCoreApplication::translate("interface", "\347\241\256\350\256\244\345\217\221\351\200\201", nullptr));
        menuTimi_liao->setTitle(QCoreApplication::translate("interface", "Timi\347\232\204\350\201\212\345\244\251\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interface: public Ui_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
