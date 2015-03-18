TEMPLATE = app

QT += qml quick widgets

SOURCES += main.cpp \
    curseur.cpp \
    geometry.cpp \
    chantier.cpp \
    donnees_bas_niveau.cpp \
    donnees_haut_niveau.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    curseur.h \
    geometry.h \
    chantier.h \
    donnees_bas_niveau.h \
    donnees_haut_niveau.h
