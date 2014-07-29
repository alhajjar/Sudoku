#-------------------------------------------------
#
# Project created by QtCreator 2014-07-27T16:12:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku
TEMPLATE = app


SOURCES += main.cpp\
        sudoku.cpp \
    winner.cpp \
    loser.cpp

HEADERS  += sudoku.hpp \
    winner.hpp \
    loser.hpp

FORMS    += sudoku.ui \
    winner.ui \
    loser.ui

RESOURCES += \
    Ressources.qrc
