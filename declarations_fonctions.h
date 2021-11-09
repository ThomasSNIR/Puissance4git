/*************************************************************
* Nom ............ : Thomas Caron
* Rôle ........... : Etudiant
* Auteur ......... : Thomas.CARON
* Date création .. :
* Version/Màj .... :
* Licence ........ : GPLv4
*************************************************************/
#ifndef DECLARATIONS_FONCTIONS_H
#define DECLARATIONS_FONCTIONS_H
#include <declarations_structures.h>

void saisie_donnees_joueurs (Joueur Joueur1,Joueur Joueur2);
int verifier_colonne_pleine (Joueur joueur,Grille grille);
int verifier_grille_pleine (Grille grille);
void afficher_erreurs (int a, int b);

#endif // DECLARATIONS_FONCTIONS_H
