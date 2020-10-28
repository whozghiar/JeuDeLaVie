#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TailleMatrice 10

void init_planeur(int matrice[][TailleMatrice]){
    int i,j;
    for (i=0; i < TailleMatrice;i++ ){
        for (j=0;j<TailleMatrice;j++){
            matrice[i][j]=0;
        }
    }
    matrice[1][2]=1;
    matrice[2][1]=1;
    matrice[2][2]=1;
}


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

void affiche_ligne(int ligne){
    int k;
    for (k = 0 ; k < ligne; k++){
        printf("--");
    }
    printf("-\n");
}


void affichage(int matrice[][TailleMatrice]){
    int i,j;
    for (i = 1 ; i < TailleMatrice-1; i++){

        for (j = 1; j < TailleMatrice-1 ; j++){
            if (matrice[i][j]==1){
                printf(" V");
            }
            else{
                printf(" M");
            }
        }
        printf("\n");
    }
  
}


int main(){

    int matrice[TailleMatrice][TailleMatrice];
    init_hasard(matrice);
    affichage(matrice);

    return 0;
}