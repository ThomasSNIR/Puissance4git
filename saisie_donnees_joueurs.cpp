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

Joueur saisie_donnees_joueurs (int joueur)
{
    int i = 0;
    Joueur Joueur = {"",0,0};

    Joueur.couleur=0;

    cout <<"Joueur " << joueur <<" : Entrez votre nom (10 caractères max.) : ";
    do
    {
        Joueur.nom[i]=getchar();
        i++;
    }while((Joueur.nom[i-1]!='\n')&&(i<10));
    return Joueur;

}
