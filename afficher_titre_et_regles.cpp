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

void afficher_titre_et_regles(void)
{
    cout << "########## BIENVENUE DANS LE PUISSANCE 4 ###########" << endl << endl;
    cout << "REGLES DU JEU :" << endl<< endl;
    cout << "   1- Jeu en tour par tour, le joueur 1 commence"<< endl;
    cout << "   2- Si la colonne que vous sélectionnez est pleine alors cela amenera une erreur" << endl;
    cout << "   3- Si la grille est remplie sans qu'il y ai de vainqueur alors match nul" << endl;
    cout << "   4- Le vainqueur est celui qui alligne 4 jetons en ligne, colonne ou diagonale" << endl << endl;

}
