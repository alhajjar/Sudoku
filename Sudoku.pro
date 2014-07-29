#-------------------------------------------------
#
# Project created by QtCreator 2014-07-27T16:12:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku
TEMPLATE = app


SOURCES += src/main.cpp\
        src/sudoku.cpp \
    src/winner.cpp \
    src/loser.cpp

HEADERS  += Headers/sudoku.hpp \
    Headers/winner.hpp \
    Headers/loser.hpp

FORMS    += Graphics/sudoku.ui \
    Graphics/winner.ui \
    Graphics/loser.ui

RESOURCES += \
    Ressources.qrc
