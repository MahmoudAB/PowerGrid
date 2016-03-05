#-------------------------------------------------
#
# Project created by QtCreator 2016-03-01T17:53:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Player.cpp \
    nowindow.cpp

HEADERS  += mainwindow.h \
    Player.h \
    nowindow.h

FORMS    += mainwindow.ui \
    nowindow.ui

RESOURCES += \
    myfile.qrc
