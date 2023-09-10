QT += network widgets core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS       = server.h \
                popup.h
SOURCES       = server.cpp \
                popup.cpp \
                main.cpp

TARGET = PopupWindow
TEMPLATE = app
