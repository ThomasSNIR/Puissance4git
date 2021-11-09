TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        afficher_erreurs.cpp \
        main.cpp \
        saisie_donnees_joueurs.cpp \
        verifier_colonne_pleine.cpp \
        verifier_grille_pleine.cpp

HEADERS += \
    declarations_fonctions.h \
    declarations_structures.h
