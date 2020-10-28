#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 
void affiche_ligne(int ligne);

void affichage(int matrice[][TailleMatrice]){
    int i,j;
    for (i = 1 ; i < TailleMatrice-1; i++){
        affiche_ligne(TailleMatrice-2);
        for (j = 1; j < TailleMatrice-1 ; j++){
            if (matrice[i][j]==1){
                printf("|V");
            }
            else{
                printf("|M");
            }
        }
        printf("|\n");
    }
    affiche_ligne(TailleMatrice-2);
}


