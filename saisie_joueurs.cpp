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

void saisie_joueurs ()
{
    int i = 0;
    Joueur Joueur1;
    Joueur Joueur2;
    Joueur1.couleur=0;
    printf("############# Bienvenue dans le Jeu du Puissance 4 #############\n");
    printf("Joueur 1 : Entrez votre nom (10 caractères max.) :");



    do
    {
        Joueur1.nom[i]=getchar();
        i++;
    }while((Joueur1.nom[i-1]!='\n')&&(i<10));

    printf("Joueur 1 : Entrez votre couleur (1 ou 0) :");
    scanf("%d",&Joueur1.couleur);
    i=0;
    printf("Joueur 2 : Entrez votre nom (10 caractères max.) : ");

    do
    {
        Joueur2.nom[i]=getchar();
        i++;
    }while ((Joueur2.nom[i-1]!='\n')&&(i<10));
    printf("Joueur 1 : Entrez votre couleur (différent du premier) :");
    scanf("%d",&Joueur2.couleur);

}
