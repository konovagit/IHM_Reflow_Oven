#-------------------------------------------------
#
# Project created by QtCreator 2015-07-02T11:01:06
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = IHM_Reflow_Oven
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    myserver.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    myserver.h

FORMS    += mainwindow.ui

CONFIG +=qwt

INCLUDEPATH += C:\qwt-6.1.2\include

