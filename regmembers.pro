#-------------------------------------------------
#
# Project created by QtCreator 2018-10-30T13:33:35
#
#-------------------------------------------------

TARGET = regmembers
TEMPLATE = app
CONFIG += c++11
CONFIG += console
CONFIG -= app_bundle

QT += core gui widgets

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    memberlist.cpp \
    membersmodel.cpp \
    csvdata.cpp

HEADERS += \
    mainwindow.h \
    member.h \
    memberlist.h \
    membersmodel.h \
    csvdata.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
