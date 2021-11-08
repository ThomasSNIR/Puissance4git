/*************************************************************
* Nom ............ : Thomas Caron
* Rôle ........... : Etudiant
* Auteur ......... : Thomas.CARON
* Date création .. :
* Version/Màj .... :
* Licence ........ : GPLv4
*************************************************************/
#ifndef DECLARATIONS_STRUCTURES_H
#define DECLARATIONS_STRUCTURES_H
typedef struct // Declarations de 2 structures, 1 pour chaque joueur qui renferme la colonne que le joueur choisi et la "couleur" du joueur
{
    char nom[10];
    int couleur;
    int colonne;
} Joueur ;
typedef struct
{
    char Grille[7][6];
}Grille;
#endif // DECLARATIONS_STRUCTURES_H
