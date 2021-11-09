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

void afficher_erreurs (int a, int b)
{
    if (a!= 0)
    {
        printf("Erreur : la colonne est déjà remplie !");

    }
    if (b != 0)
    {
        printf("Erreur : La grille est remplie ! \nFin du jeu !");
    }

    if (a==0 && b==0)
    {
        printf("Il n'y a pas d'erreurs !");
    }

}
