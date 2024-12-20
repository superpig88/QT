

QT       += core gui
QT += core5compat

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = lunarcalendarwidget
TEMPLATE    = app
DESTDIR     = $$PWD/../bin
CONFIG      += qt warn_off
RESOURCES   += main.qrc

SOURCES     += main.cpp
SOURCES     += frmlunarcalendarwidget.cpp
SOURCES     += lunarcalendaritem.cpp
SOURCES     += lunarcalendarinfo.cpp
SOURCES     += lunarcalendarwidget.cpp

HEADERS     += frmlunarcalendarwidget.h
HEADERS     += lunarcalendaritem.h
HEADERS     += lunarcalendarinfo.h
HEADERS     += lunarcalendarwidget.h

FORMS       += frmlunarcalendarwidget.ui
