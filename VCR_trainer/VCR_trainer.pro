#-------------------------------------------------
#
# Project created by QtCreator 2013-02-09T15:24:42
#
#-------------------------------------------------

QT       += core gui
QT       +=sql
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VCR_trainer
TEMPLATE = app


SOURCES += main.cpp\
        virtualclassroom.cpp \
    workspace.cpp \
    vlc_on_qt.cpp \
    ChatterBoxServer.cpp \
    MainWindow.cpp \
    canvas.cpp

HEADERS  += virtualclassroom.h \
    workspace.h \
    vlc_on_qt.h \
    ChatterBoxServer.h \
    MainWindow.h \
    canvas.h

FORMS    += virtualclassroom.ui \
    workspace.ui \
    MainWindow.ui

RESOURCES += \
    resources.qrc
LIBS += -lvlc

