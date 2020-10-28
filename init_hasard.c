#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TailleMatrice 10 

/** 
 * La fonction init_hasard permet d'initialiser au hasard la matrice.
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * 
 * Elle initialise des coordonnées de la matrice de manière aléatoire provoquant ainsi un résultat innatendu.  
 * 
 * Cette fonction ne retourne rien. 
*/


void init_hasard(int matrice[][TailleMatrice]){
    int i,j,alea;
    srand(time(NULL));
    for (i = 0; i < TailleMatrice ; i++ ){
        for (j = 0; j < TailleMatrice ; j++){
            if ((i==0) || (j==0) || (i==TailleMatrice-1) || (j==TailleMatrice-1)){
                matrice [i][j]=0;
            }
            else{
                matrice[i][j]=rand()%2;
            }
        }
    }
}
    