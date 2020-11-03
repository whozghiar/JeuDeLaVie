#include "main.h"

/** 
 * La fonction init_planeur permet d'initialiser un planeur dans la matrice.
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * 
 * Elle initialise des coordonnées de la matrice à 1 de sorte à former le planeur. 
 * 
 * Cette fonction ne retourne rien. 
*/

void init_planeur(int matrice[][TailleMatrice]){
    int i,j;
    for (i=0; i < TailleMatrice;i++ ){
        for (j=0;j<TailleMatrice;j++){
            matrice[i][j]=0;
        }
    }
    matrice[1][2]=1;
    matrice[2][3]=1;
    matrice[3][1]=1;
    matrice[3][2]=1;
    matrice[3][3]=1;
}
