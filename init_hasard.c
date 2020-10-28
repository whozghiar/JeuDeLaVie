#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 

void init_hasard(int matrice[][TailleMatrice]){
    int i,j,alea;
    for (i = 1; i < TailleMatrice-1 ; i++ ){
        for (j = 1; j < TailleMatrice-1 ; i++){
            alea=rand() % 2;
            matrice[i][j] = alea;
        }
    }

    