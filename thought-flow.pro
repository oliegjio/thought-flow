QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thought-flow
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mindmap.cpp \
    node.cpp

HEADERS += \
    mainwindow.h \
    mindmap.h \
    node.h
