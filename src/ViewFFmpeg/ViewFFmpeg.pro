TEMPLATE = app
CONFIG += console c++11
SOURCES += main.cpp

TARGET = qtViewFFmpeg

INCLUDEPATH += $$PWD\..\..\include
LIBS += -L$$PWD\..\..\lib\win64

DESTDIR = $$PWD\..\..\bin\win64
DEPENDPATH += $$PWD\..\..\bin\win64
