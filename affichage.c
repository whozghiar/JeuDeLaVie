#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10 
void affiche_ligne(int ligne);

void affichage(int matrice[][TailleMatrice]){
    int i,j;
    for (i = 1; i <= TailleMatrice; i++){
        affiche_ligne(TailleMatrice);
        for (j = 1; j <= TailleMatrice ; j++){
            if (matrice[i][j]==1){
                printf("|V");
            }
            else{
                printf("|M");
            }
        printf("|\n");
        }
    }
    affiche_ligne(TailleMatrice);
}


