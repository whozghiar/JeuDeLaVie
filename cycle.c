#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10 

void cycle(int matrice[][TailleMatrice]) {
    
    int i,j, nbVoisin;
    int copieMatrice[TailleMatrice][TailleMatrice];
    for(i=0;i<TailleMatrice;i++){
        for(j=0;j<TailleMatrice;i++){
            copieMatrice[i][j]=matrice[i][j];
        }
    }
    
    for(i=1;i<TailleMatrice-1;i++){
        for(j=1;j<TailleMatrice-1;j++){
            nbVoisin=compte_voisin(copieMatrice,i,j);
            if(((matrice[i][j]==1)&&(nbVoisin==2))||(nbVoisin==3)){
                matrice[i][j]=1;
            }
            else{
                matrice[i][j]=0;
            }
        }
    }   
}
