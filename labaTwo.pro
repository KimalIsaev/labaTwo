QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        abstractclassunit.cpp \
        abstractlanguage.cpp \
        abstractmethodunit.cpp \
        abstractprintunit.cpp \
        interpreter.cpp \
        interpretercreator.cpp \
        javaclassunit.cpp \
        javalanguage.cpp \
        javamethodunit.cpp \
        javaprintunit.cpp \
        main.cpp \
        plusclassunit.cpp \
        pluslanguage.cpp \
        plusmethodunit.cpp \
        plusprintunit.cpp \
        sharpclassunit.cpp \
        sharplanguage.cpp \
        sharpmethodunit.cpp \
        sharpprintunit.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    abstractclassunit.h \
    abstractlanguage.h \
    abstractmethodunit.h \
    abstractprintunit.h \
    interpreter.h \
    interpretercreator.h \
    javaclassunit.h \
    javalanguage.h \
    javamethodunit.h \
    javaprintunit.h \
    plusclassunit.h \
    pluslanguage.h \
    plusmethodunit.h \
    plusprintunit.h \
    sharpclassunit.h \
    sharplanguage.h \
    sharpmethodunit.h \
    sharpprintunit.h \
    unit.h
