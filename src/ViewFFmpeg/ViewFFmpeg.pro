TEMPLATE = app
CONFIG += console c++11
SOURCES += main.cpp

TARGET = qtViewFFmpeg 

#linux
linux{
    message("linux")
    INCLUDEPATH += /usr/local/ffmpeg/include
    LIBS += -L/usr/local/ffmpeg/lib -lavcodec -lavutil -lswresample
    DESTDIR = $$PWD/../../bin/linux
    DEPENDPATH += $$PWD/../../bin/linux
}
#win
win32{
    INCLUDEPATH += $$PWD\..\..\include
    opt=$$find(QMAKESPEC,"msvc2015_64")
    isEmpty(opt){
        message("win32")
        LIBS += -L$$PWD\..\..\lib\win32
        DESTDIR = $$PWD\..\..\bin\win32
        DEPENDPATH += $$PWD\..\..\bin\win32
    }
    !isEmpty(opt){
        message("win64")
        LIBS += -L$$PWD\..\..\lib\win64
        DESTDIR = $$PWD\..\..\bin\win64
        DEPENDPATH += $$PWD\..\..\bin\win64
    }
}
