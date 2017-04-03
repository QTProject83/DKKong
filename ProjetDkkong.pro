#-------------------------------------------------
#
# Project created by QtCreator 2017-02-28T14:31:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetDkkong
TEMPLATE = app


SOURCES += main.cpp\
        view.cpp \
    control.cpp \
    model.cpp \
    gamescenemajor.cpp

HEADERS  += view.h \
    control.h \
    model.h \
    gamescenemajor.h

FORMS    += view.ui

RESOURCES += \
    ressources.qrc
