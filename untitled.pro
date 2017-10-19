#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T11:15:24
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    gui_contratos.cpp \
    gui_contratos_abiertos.cpp \
    gui_contratos_condiciones.cpp \
    gui_contratos_cdp_elegir.cpp \
    gui_ver.cpp \
    db_manager.cpp

HEADERS  += mainwindow.h \
    gui_contratos.h \
    gui_contratos_abiertos.h \
    gui_contratos_condiciones.h \
    gui_contratos_cdp_elegir.h \
    gui_ver.h \
    db_manager.h \
    head.h

FORMS    += mainwindow.ui \
    gui_contratos.ui \
    gui_contratos_abiertos.ui \
    gui_contratos_condiciones.ui \
    gui_contratos_cdp_elegir.ui \
    gui_ver.ui
