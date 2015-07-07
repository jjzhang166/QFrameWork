#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T02:47:19
#
#-------------------------------------------------

QT       += widgets

TARGET = testPlugin
TEMPLATE = lib

DEFINES += TESTPLUGIN_LIBRARY

SOURCES += testplugin.cpp \
    form.cpp

HEADERS += testplugin.h\
        testplugin_global.h \
    form.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    form.ui
