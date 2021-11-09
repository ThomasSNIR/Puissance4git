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

void saisie_donnees_joueurs (Joueur Joueur1,Joueur Joueur2)
{
    int i = 0;

    Joueur1.couleur=0;
    printf("############# Bienvenue dans le Jeu du Puissance 4 #############\n");

    printf("Joueur 1 : Entrez votre nom (10 caractères max.) :");
    do
    {
        Joueur1.nom[i]=getchar();
        i++;
    }while((Joueur1.nom[i-1]!='\n')&&(i<10));



    i=0;

    printf("Joueur 2 : Entrez votre nom (10 caractères max.) : ");
    do
    {
        Joueur2.nom[i]=getchar();
        i++;
    }while ((Joueur2.nom[i-1]!='\n')&&(i<10));



}
