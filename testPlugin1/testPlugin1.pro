#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T03:06:19
#
#-------------------------------------------------
QT       += widgets

TARGET = testPlugin1
TEMPLATE = lib

DEFINES += TESTPLUGIN1_LIBRARY

SOURCES += testplugin1.cpp \
    form.cpp

HEADERS += testplugin1.h\
        testplugin1_global.h \
    form.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    form.ui
