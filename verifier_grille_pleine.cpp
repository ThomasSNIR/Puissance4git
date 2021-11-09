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

int verifier_grille_pleine (Grille grille)
{
    int colonne = 7, retour = 0;
    for (int i = 0; i<colonne;i++)
    {
        if(grille.Grille[i][1]!='-')
        {
            retour = 1;
        }
        else retour = 0;
    }
    return retour;
}
