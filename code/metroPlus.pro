QT       += core gui
QT += webenginewidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cloth.cpp \
    historyroute.cpp \
    hotplace.cpp \
    main.cpp \
    mainwindow.cpp \
    operationtime.cpp \
    realtime.cpp \
    routeplan.cpp \
    secondwidget.cpp

HEADERS += \
    cloth.h \
    historyroute.h \
    hotplace.h \
    mainwindow.h \
    operationtime.h \
    realtime.h \
    routeplan.h \
    secondwidget.h
FORMS += \
    cloth.ui \
    historyroute.ui \
    hotplace.ui \
    mainwindow.ui \
    operationtime.ui \
    realtime.ui \
    secondwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
