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

int demande_saisie_colonne()
{
    int colonne =0;

    printf("Saisissez la colonne a laquelle vous voulez placer votre jeton :\n");
    cin >> colonne;
    return colonne;

}
