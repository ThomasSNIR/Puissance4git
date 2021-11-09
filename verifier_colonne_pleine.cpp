/*************************************************************
* Nom ............ : Thomas Caron
* Rôle ........... : Etudiant
* Auteur ......... : Thomas.CARON
* Date création .. :
* Version/Màj .... :
* Licence ........ : GPLv4
*************************************************************/
#include <iostream>
#include <declarations_structures.h>
#include <declarations_fonctions.h>

using namespace std;

int verifier_colonne_pleine (Joueur joueur,Grille grille)
{
    int retour =0;
    if (grille.Grille[joueur.colonne][1]!='-')
    {
        retour = 1;
    }
    else retour = 0;
    return retour;
}
