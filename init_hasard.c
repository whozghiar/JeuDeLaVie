#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 

void init_hasard(int matrice[][TailleMatrice]){
    int i,j,alea;
    for (i = 1; i < TailleMatrice-1 ; i++ ){
        for (j = 1; j < TailleMatrice-1 ; i++){
            if ((i==0) || (j==0) || (i==TailleMatrice-1) || (j==TailleMatrice-1)){
                matrice [i][j]=0;
            }
            else{
                matrice[i][j]=rand()%2;
            }
        }
    }

    