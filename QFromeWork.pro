#-------------------------------------------------
#
# Project created by QtCreator 2015-07-07T16:31:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets qml

TARGET = QFromeWork
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sidebar.cpp \
    mainqmlcon.cpp \
    toolbarmodel.cpp

HEADERS  += mainwindow.h \
    sidebar.h \
    mainqmlcon.h \
    toolbarmodel.h

FORMS    += mainwindow.ui \
    sidebar.ui

RESOURCES +=

DISTFILES += \
    uiData/qml/SideBar.qml \
    uiData/qml/ToolBar.qml
