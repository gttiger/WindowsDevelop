#-------------------------------------------------
#
# Project created by QtCreator 2021-08-09T15:48:57
#
#-------------------------------------------------

QT       -= gui

TARGET = getfreespace
TEMPLATE = lib

DEFINES += GETFREESPACE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG  += plugin
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += debug_and_release
CONFIG(debug,debug|release){
    TARGET  = Getfreespaced
    DESTDIR = $$PWD/../bin
}else{
    TARGET = Getfreespace
    DESTDIR = $$PWD/../binr
}

SOURCES += \
        getfreespace.cpp

HEADERS += \
        getfreespace.h \
        getfreespace_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
