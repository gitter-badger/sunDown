#-------------------------------------------------
#
# Project created by QtCreator 2016-06-05T13:08:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sunDown\
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hex.cpp \
    item.cpp \
    feature.cpp \
    graphicsscene.cpp \
    setupmap.cpp

HEADERS  += mainwindow.h \
    hex.h \
    item.h \
    feature.h \
    graphicsscene.h \
    setupmap.h

FORMS    += mainwindow.ui

win32:RC_ICONS += icon.ico
