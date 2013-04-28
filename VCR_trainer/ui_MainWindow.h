/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Thu Apr 25 14:19:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *userListWidget;
    QLineEdit *sayLineEdit;
    QTextEdit *roomTextEdit;
    QPushButton *sayButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(328, 548);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        userListWidget = new QListWidget(centralwidget);
        userListWidget->setObjectName(QString::fromUtf8("userListWidget"));
        userListWidget->setEnabled(true);
        userListWidget->setGeometry(QRect(3, 30, 321, 191));
        sayLineEdit = new QLineEdit(centralwidget);
        sayLineEdit->setObjectName(QString::fromUtf8("sayLineEdit"));
        sayLineEdit->setGeometry(QRect(5, 480, 271, 27));
        roomTextEdit = new QTextEdit(centralwidget);
        roomTextEdit->setObjectName(QString::fromUtf8("roomTextEdit"));
        roomTextEdit->setGeometry(QRect(4, 250, 321, 221));
        roomTextEdit->setReadOnly(true);
        sayButton = new QPushButton(centralwidget);
        sayButton->setObjectName(QString::fromUtf8("sayButton"));
        sayButton->setGeometry(QRect(276, 480, 50, 27));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sayButton->sizePolicy().hasHeightForWidth());
        sayButton->setSizePolicy(sizePolicy);
        sayButton->setMaximumSize(QSize(50, 16777215));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 230, 111, 16));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 328, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Discussion", 0, QApplication::UnicodeUTF8));
        sayButton->setText(QApplication::translate("MainWindow", "Say", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline; color:#aa5555;\">Attendance</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline; color:#55aa7f;\">Question Asked</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
