/********************************************************************************
** Form generated from reading UI file 'workspace.ui'
**
** Created: Thu Apr 25 14:25:37 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSPACE_H
#define UI_WORKSPACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workSpace
{
public:
    QAction *actionOpen_Image;
    QWidget *centralwidget;
    QFrame *video;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *close_chatbox_4;
    QPushButton *close_chatbox_3;
    QPushButton *close_chatbox;
    QPushButton *chattbox;
    QPushButton *close_chatbox_5;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *canvas;
    QPushButton *saveImage;
    QPushButton *clearCanvas;
    QPushButton *penColor;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *workSpace)
    {
        if (workSpace->objectName().isEmpty())
            workSpace->setObjectName(QString::fromUtf8("workSpace"));
        workSpace->resize(1024, 633);
        workSpace->setStyleSheet(QString::fromUtf8(""));
        actionOpen_Image = new QAction(workSpace);
        actionOpen_Image->setObjectName(QString::fromUtf8("actionOpen_Image"));
        centralwidget = new QWidget(workSpace);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        video = new QFrame(centralwidget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(670, 10, 351, 361));
        video->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"     border-radius: 4px;\n"
"     padding: 2px;\n"
""));
        video->setFrameShape(QFrame::StyledPanel);
        video->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(video);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 351, 361));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        close_chatbox_4 = new QPushButton(centralwidget);
        close_chatbox_4->setObjectName(QString::fromUtf8("close_chatbox_4"));
        close_chatbox_4->setGeometry(QRect(670, 540, 321, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Inconsolata"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        close_chatbox_4->setFont(font);
        close_chatbox_4->setCursor(QCursor(Qt::PointingHandCursor));
        close_chatbox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/images/resources/drive.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_chatbox_4->setIcon(icon);
        close_chatbox_3 = new QPushButton(centralwidget);
        close_chatbox_3->setObjectName(QString::fromUtf8("close_chatbox_3"));
        close_chatbox_3->setGeometry(QRect(670, 490, 191, 41));
        close_chatbox_3->setFont(font);
        close_chatbox_3->setCursor(QCursor(Qt::PointingHandCursor));
        close_chatbox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        close_chatbox_3->setIcon(icon);
        close_chatbox = new QPushButton(centralwidget);
        close_chatbox->setObjectName(QString::fromUtf8("close_chatbox"));
        close_chatbox->setGeometry(QRect(670, 440, 321, 41));
        close_chatbox->setFont(font);
        close_chatbox->setCursor(QCursor(Qt::PointingHandCursor));
        close_chatbox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/images/resources/gnome-session-logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_chatbox->setIcon(icon1);
        chattbox = new QPushButton(centralwidget);
        chattbox->setObjectName(QString::fromUtf8("chattbox"));
        chattbox->setGeometry(QRect(670, 390, 321, 41));
        chattbox->setFont(font);
        chattbox->setCursor(QCursor(Qt::PointingHandCursor));
        chattbox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/images/resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        chattbox->setIcon(icon2);
        close_chatbox_5 = new QPushButton(centralwidget);
        close_chatbox_5->setObjectName(QString::fromUtf8("close_chatbox_5"));
        close_chatbox_5->setGeometry(QRect(870, 490, 121, 41));
        close_chatbox_5->setFont(font);
        close_chatbox_5->setCursor(QCursor(Qt::PointingHandCursor));
        close_chatbox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        close_chatbox_5->setIcon(icon);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 641, 521));
        canvas = new QHBoxLayout(horizontalLayoutWidget_2);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->setContentsMargins(0, 0, 0, 0);
        saveImage = new QPushButton(centralwidget);
        saveImage->setObjectName(QString::fromUtf8("saveImage"));
        saveImage->setGeometry(QRect(20, 10, 141, 41));
        saveImage->setFont(font);
        saveImage->setCursor(QCursor(Qt::PointingHandCursor));
        saveImage->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 89, 89);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        clearCanvas = new QPushButton(centralwidget);
        clearCanvas->setObjectName(QString::fromUtf8("clearCanvas"));
        clearCanvas->setGeometry(QRect(170, 10, 141, 41));
        clearCanvas->setFont(font);
        clearCanvas->setCursor(QCursor(Qt::PointingHandCursor));
        clearCanvas->setStyleSheet(QString::fromUtf8("background-color: rgb(107, 107, 107);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        penColor = new QPushButton(centralwidget);
        penColor->setObjectName(QString::fromUtf8("penColor"));
        penColor->setGeometry(QRect(320, 10, 141, 41));
        penColor->setFont(font);
        penColor->setCursor(QCursor(Qt::PointingHandCursor));
        penColor->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(470, 20, 160, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        workSpace->setCentralWidget(centralwidget);
        menubar = new QMenuBar(workSpace);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        workSpace->setMenuBar(menubar);
        statusbar = new QStatusBar(workSpace);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        workSpace->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_Image);

        retranslateUi(workSpace);

        QMetaObject::connectSlotsByName(workSpace);
    } // setupUi

    void retranslateUi(QMainWindow *workSpace)
    {
        workSpace->setWindowTitle(QApplication::translate("workSpace", "Work Space", 0, QApplication::UnicodeUTF8));
        actionOpen_Image->setText(QApplication::translate("workSpace", "Open Image", 0, QApplication::UnicodeUTF8));
        close_chatbox_4->setText(QApplication::translate("workSpace", "Upload Assignments", 0, QApplication::UnicodeUTF8));
        close_chatbox_3->setText(QApplication::translate("workSpace", "Upload Presentations", 0, QApplication::UnicodeUTF8));
        close_chatbox->setText(QApplication::translate("workSpace", "Close the  Q 'n A session", 0, QApplication::UnicodeUTF8));
        chattbox->setText(QApplication::translate("workSpace", "Allow Students to Ask Question", 0, QApplication::UnicodeUTF8));
        close_chatbox_5->setText(QApplication::translate("workSpace", "Upload Notes", 0, QApplication::UnicodeUTF8));
        saveImage->setText(QApplication::translate("workSpace", "Save/Send Image", 0, QApplication::UnicodeUTF8));
        clearCanvas->setText(QApplication::translate("workSpace", "Clear Canvas", 0, QApplication::UnicodeUTF8));
        penColor->setText(QApplication::translate("workSpace", "Choose Pen Color", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("workSpace", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class workSpace: public Ui_workSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSPACE_H
