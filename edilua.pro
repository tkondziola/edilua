#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T15:49:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = edilua
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    luaengine.cpp \
    luasyntaxhighlighter.cpp

HEADERS  += mainwindow.h \
    luaengine.h \
    luasyntaxhighlighter.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

LIBS += -llua5.1
