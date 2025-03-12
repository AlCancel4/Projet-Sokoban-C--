QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    caisse.cpp \
    casevide.cpp \
    coordonnee.cpp \
    grille.cpp \
    immobile.cpp \
    jouer.cpp \
    main.cpp \
    mainwindow.cpp \
    mobile.cpp \
    mur.cpp \
    neant.cpp \
    niveaux.cpp \
    personnage.cpp \
    regle.cpp \
    resultat.cpp

HEADERS += \
    caisse.h \
    casevide.h \
    coordonnee.h \
    grille.h \
    immobile.h \
    jouer.h \
    mainwindow.h \
    mobile.h \
    mur.h \
    neant.h \
    niveaux.h \
    personnage.h \
    regle.h \
    resultat.h

FORMS += \
    jouer.ui \
    mainwindow.ui \
    niveaux.ui \
    regle.ui \
    resultat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc
