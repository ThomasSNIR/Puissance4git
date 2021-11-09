/*************************************************************
* Nom ............ : Thomas Caron
* Rôle ........... : Etudiant
* Auteur ......... : Thomas.CARON
* Date création .. :
* Version/Màj .... :
* Licence ........ : GPLv4
*************************************************************/
#include <iostream>
#include <declarations_fonctions.h>
#include <declarations_structures.h>


using namespace std;

int main()
{
    int a = 0,b=0;

    Grille grille;

    for (int i = 0; i == 7; i++)
    {
        for(int j =0; j==6; j++)
        {
            grille.Grille[i][j]='-';
        }
    }

    Joueur Joueur1 = {"",0,0};
    Joueur Joueur2 = {"",0,0};

    saisie_donnees_joueurs(Joueur1,Joueur2);
    printf(Joueur1.nom,Joueur2.nom);
    a = verifier_colonne_pleine(Joueur1,grille);
    b = verifier_grille_pleine(grille);

    afficher_erreurs (a,b);
    return 0;
}
