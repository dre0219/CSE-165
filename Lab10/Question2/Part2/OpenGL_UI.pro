QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MYGL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    my_gl.cpp

HEADERS  += mainwindow.h \
    my_gl.h

FORMS    += mainwindow.ui

LIBS    += -framework OpenGL
