#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 

void init_hasard(int matrice[][TailleMatrice]){
    int i,j;
    for (i=0; i < TailleMatrice;i++ ){
        for (j=0;j<TailleMatrice;i++){
            matrice[i][j]=0;
        }
    }

    