#include "main.h"

/** 
 * La fonction affichage permet d'afficher les cellule d'une matrice dans laquelle le jeu va se dérouler.
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * 
 * Elle parcourt la zone de jeu et affiche " * " si la cellule est vivante, " . " sinon.  
 * 
 * Cette fonction ne retourne rien. 
*/


void affichage(int matrice[][TailleMatrice]){
    int i,j;
    for (i = 1 ; i < TailleMatrice-1; i++){
        for (j = 1; j < TailleMatrice-1 ; j++){
            if (matrice[i][j]==1){
                printf(" *");
            }
            else{
                printf(" .");
            }
        }
        printf(" \n");
    }
}

