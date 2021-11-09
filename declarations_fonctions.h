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

Joueur saisie_donnees_joueurs (int joueur);
int verifier_colonne_pleine (Joueur joueur,Grille grille);
int verifier_grille_pleine (Grille grille);
void afficher_erreurs (int a, int b);
int demande_saisie_colonne();
void afficher_titre_et_regles(void);

#endif // DECLARATIONS_FONCTIONS_H
