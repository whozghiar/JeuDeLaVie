#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 

void init_planeur(int matrice[][TailleMatrice]){
    int i,j;
    for (i=0; i < TailleMatrice;i++ ){
        for (j=0;j<TailleMatrice;i++){
            matrice[i][j]=0;
        }
    }
    matrice[1][2]=1;
    matrice[2][1]=1;
    matrice[2][2]=1;
}
