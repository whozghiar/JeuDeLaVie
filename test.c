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
}

void affiche_ligne(int ligne){
    int k;
    for (k = 0 ; k < ligne; k++){
        printf("--");
    }
    printf("-\n");
}

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


int main(){

    int matrice[TailleMatrice][TailleMatrice];
    init_hasard(matrice);
    affichage(matrice);

    return 0;
}