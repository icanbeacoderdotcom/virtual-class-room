/********************************************************************************
** Form generated from reading UI file 'virtualclassroom.ui'
**
** Created: Thu Apr 25 16:57:05 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALCLASSROOM_H
#define UI_VIRTUALCLASSROOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VirtualClassRoom
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QFrame *cloud;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_10;
    QWidget *page_2;
    QFrame *frame_3;
    QLabel *label_5;
    QFrame *frame_4;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *email;
    QLineEdit *password;
    QPushButton *pushButton_3;
    QLabel *label_24;
    QFrame *frame_5;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QFrame *frame_6;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_5;
    QLineEdit *lineEditName;
    QLabel *label_4;
    QLineEdit *lineEditRoll;
    QLineEdit *lineEditEmail;
    QLabel *label_13;
    QLineEdit *lineEditPassword;
    QComboBox *comboBox;
    QLabel *label_16;
    QComboBox *comboBoxYear;
    QLabel *label_17;
    QCheckBox *checkBox;
    QLabel *error;
    QPushButton *pushButton_6;
    QLabel *label_14;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *VirtualClassRoom)
    {
        if (VirtualClassRoom->objectName().isEmpty())
            VirtualClassRoom->setObjectName(QString::fromUtf8("VirtualClassRoom"));
        VirtualClassRoom->resize(722, 529);
        VirtualClassRoom->setAutoFillBackground(false);
        VirtualClassRoom->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 94, 94);\n"
"alternate-background-color: rgb(79, 79, 79);"));
        centralWidget = new QWidget(VirtualClassRoom);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 720, 531));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, 0, 731, 531));
        frame->setStyleSheet(QString::fromUtf8("QFrame #frame{\n"
"	background-image: url(:/new/images/resources/wall.png);\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"     \n"
"     border-radius: 4px;\n"
"     padding: 2px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 10, 1, 520));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border : 1px dashed;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 430, 421, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 125 38);\n"
"background-color: rgb(234, 66, 15);\n"
"font: 75 16pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);\n"
"  border-style: outset;\n"
" border-width: 1px;\n"
"border-radius : 4px;\n"
"     border-color: rgb(0,0,0);"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 460, 251, 27));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 98, 98);\n"
"font: 75 16pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);\n"
"  border-style: outset;\n"
" border-width: 1px;\n"
"border-radius : 4px;\n"
"     border-color: rgb(0,0,0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 380, 471, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aliquam"));
        font1.setBold(false);
        font1.setWeight(50);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 160, 131, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Raleway"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-bottom : 1px solid #53bee2;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 220, 161, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Raleway"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-bottom : 1px solid #53bee2;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 280, 101, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Raleway"));
        font4.setBold(false);
        font4.setWeight(50);
        label_3->setFont(font4);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-bottom : 1px solid #53bee2;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 30, 351, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Code Bold"));
        font5.setBold(true);
        font5.setWeight(75);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-bottom : 2px solid #53bee2;"));
        cloud = new QFrame(frame);
        cloud->setObjectName(QString::fromUtf8("cloud"));
        cloud->setGeometry(QRect(360, 140, 271, 211));
        cloud->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/new/images/resources/cloud.png);"));
        cloud->setFrameShape(QFrame::NoFrame);
        cloud->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(cloud);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 160, 49, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Aliquam"));
        label_11->setFont(font6);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(430, 330, 281, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Inconsolata"));
        font7.setPointSize(8);
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(610, 180, 81, 20));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Inconsolata"));
        label_10->setFont(font8);
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 721, 71));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame #frame_3{\n"
"background-color: rgb(167, 201, 255);\n"
"border-bottom : 2px solid;\n"
"border-bottom-color : rgb(108,160,181);\n"
"}"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(1);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 10, 281, 51));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Raleway"));
        label_5->setFont(font9);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 201, 255);"));
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 150, 451, 351));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"     border-radius: 4px;\n"
"     padding: 2px;\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 40, 191, 31));
        label_9 = new QLabel(frame_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 130, 101, 31));
        email = new QLineEdit(frame_4);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(40, 80, 381, 31));
        email->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;"));
        password = new QLineEdit(frame_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(40, 160, 381, 31));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;"));
        password->setEchoMode(QLineEdit::Password);
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 230, 85, 27));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 76, 701, 71));
        QFont font10;
        font10.setFamily(QString::fromUtf8("URW Chancery L"));
        font10.setItalic(true);
        label_24->setFont(font10);
        label_24->setWordWrap(true);
        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(480, 150, 231, 351));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"     border-radius: 4px;\n"
"     padding: 2px;\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 20, 161, 31));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Aliquam"));
        font11.setPointSize(14);
        label_25->setFont(font11);
        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(15, 61, 201, 221));
        label_26->setWordWrap(true);
        pushButton_4 = new QPushButton(frame_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(114, 300, 111, 27));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 97, 80);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        frame_6 = new QFrame(page_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(20, 60, 681, 451));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"     border-radius: 4px;\n"
"     padding: 2px;\n"
""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_18 = new QLabel(frame_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 116, 91, 20));
        label_19 = new QLabel(frame_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 160, 101, 31));
        pushButton_5 = new QPushButton(frame_6);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 410, 181, 27));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        lineEditName = new QLineEdit(frame_6);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(160, 10, 281, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
"border-radius : 4px;"));
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 51, 16));
        lineEditRoll = new QLineEdit(frame_6);
        lineEditRoll->setObjectName(QString::fromUtf8("lineEditRoll"));
        lineEditRoll->setGeometry(QRect(160, 60, 271, 31));
        lineEditRoll->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
"border-radius : 4px;"));
        lineEditEmail = new QLineEdit(frame_6);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(160, 110, 311, 31));
        lineEditEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
"border-radius : 4px;"));
        label_13 = new QLabel(frame_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(18, 70, 111, 16));
        lineEditPassword = new QLineEdit(frame_6);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(160, 160, 241, 31));
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
"border-radius : 4px;"));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        comboBox = new QComboBox(frame_6);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 280, 113, 19));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);\n"
"selection-color: rgb(85, 170, 127);\n"
"background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
""));
        label_16 = new QLabel(frame_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 280, 41, 16));
        comboBoxYear = new QComboBox(frame_6);
        comboBoxYear->setObjectName(QString::fromUtf8("comboBoxYear"));
        comboBoxYear->setGeometry(QRect(160, 230, 111, 19));
        comboBoxYear->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);\n"
"selection-color: rgb(85, 170, 127);\n"
"background-color: rgb(255, 255, 255);\n"
"border : 1px solid #afc9b0;\n"
""));
        label_17 = new QLabel(frame_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 230, 61, 16));
        checkBox = new QCheckBox(frame_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 330, 321, 20));
        error = new QLabel(frame_6);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(20, 380, 391, 31));
        error->setStyleSheet(QString::fromUtf8("color: rgb(202, 81, 81);"));
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 410, 181, 27));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 76, 76);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 20, 661, 31));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Code Bold"));
        font12.setPointSize(20);
        font12.setBold(true);
        font12.setWeight(75);
        label_14->setFont(font12);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        stackedWidget->addWidget(page_3);
        VirtualClassRoom->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VirtualClassRoom);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 722, 23));
        VirtualClassRoom->setMenuBar(menuBar);

        retranslateUi(VirtualClassRoom);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VirtualClassRoom);
    } // setupUi

    void retranslateUi(QMainWindow *VirtualClassRoom)
    {
        VirtualClassRoom->setWindowTitle(QApplication::translate("VirtualClassRoom", "VirtualClassRoom", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("VirtualClassRoom", "Sign me in with my existing account", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("VirtualClassRoom", "Create a New account", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Welcome</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p align=\"right\"><span style=\" color:#6b6b6b;\">install</span><span style=\" font-size:14pt; color:#6b6b6b;\"/><img src=\":/new/images/resources/drive.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt; color:#6b6b6b;\">sign in </span><img src=\":/new/images/resources/gnome-session-logout.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt; color:#6b6b6b;\">learn </span><img src=\":/new/images/resources/web-browser.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:400; color:#10aaaa;\">Virtual</span><span style=\" font-size:36pt; font-weight:400;\"> Class</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("VirtualClassRoom", "Student", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p>the cloud where application run and stores <br/>assignments,ppt's, notes , attendance, discussions<br/>and many more things that you will witness shortly...</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("VirtualClassRoom", "Instructor", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p><span style=\" font-size:28pt; color:#498a8d;\">Single Sign On</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("VirtualClassRoom", "Roll ID/Teacher Subject ID", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("VirtualClassRoom", "Password", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("VirtualClassRoom", "Sign In", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p><span style=\" font-size:24pt; font-style:normal; color:#0b79ff; background-color:#ffffff; vertical-align:super;\">Virtual Class is built on the idea that classes can be more intuitive, efficient, and useful. And maybe even fun !!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("VirtualClassRoom", "Are You New ?", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("VirtualClassRoom", "<html><head/><body><p><span style=\" font-family:'UbuntuBeta,Ubuntu,Bitstream Vera Sans,DejaVu Sans,Tahoma,sans-serif'; font-size:12px; color:#333333;\">This is a new service to provide online video lectures and hands-on using a home based computer all at one place.</span></p><p><a href=\"https://login.ubuntu.com/+description\"><span style=\" font-family:'inherit'; font-size:14px; text-decoration: underline; color:#dd4814;\">Find out more</span></a></p><p><span style=\" font-family:'UbuntuBeta,Ubuntu,Bitstream Vera Sans,DejaVu Sans,Tahoma,sans-serif'; font-size:12px; color:#333333;\">A Virtual Classroom Single Sign On account is free and gives you access to all the notes, ppt's, assignments and many other useful stuff that will help you learning new things.<br/><a href=\"http://force.nith.ac.in/redmine\">read more ... </a></span></p><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("VirtualClassRoom", "Create Account", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("VirtualClassRoom", "Email Address", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("VirtualClassRoom", "Password", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("VirtualClassRoom", "Create Account", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VirtualClassRoom", "Name", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("VirtualClassRoom", "Roll No/Subject id", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("VirtualClassRoom", "Teacher/Lecturer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("VirtualClassRoom", "Student", 0, QApplication::UnicodeUTF8)
        );
        label_16->setText(QApplication::translate("VirtualClassRoom", "Role", 0, QApplication::UnicodeUTF8));
        comboBoxYear->clear();
        comboBoxYear->insertItems(0, QStringList()
         << QApplication::translate("VirtualClassRoom", "1st Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("VirtualClassRoom", "2nd Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("VirtualClassRoom", "3rd Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("VirtualClassRoom", "Final Year", 0, QApplication::UnicodeUTF8)
        );
        label_17->setText(QApplication::translate("VirtualClassRoom", "Year", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("VirtualClassRoom", "Agree with Terms and Conditions. See Help For these", 0, QApplication::UnicodeUTF8));
        error->setText(QString());
        pushButton_6->setText(QApplication::translate("VirtualClassRoom", "Back To Sign In", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("VirtualClassRoom", "Create New Account", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VirtualClassRoom: public Ui_VirtualClassRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALCLASSROOM_H
