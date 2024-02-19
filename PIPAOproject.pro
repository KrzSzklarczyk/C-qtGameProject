QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SeedMaker.cpp \
    main.cpp \
    mainwindow.cpp \
    millionaire.cpp \
    question.cpp \
    register.cpp \
    slotmachine.cpp \
    user.cpp \
    usertype.cpp

HEADERS += \
    SeedMaker.h \
    mainwindow.h \
    millionaire.h \
    question.h \
    register.h \
    slotmachine.h \
    user.h \
    usertype.h

FORMS += \
    mainwindow.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
