#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10 

void compte_voisin(int matrice[][TailleMatrice], int L, int C) {
    int resultat;
    resultat=matrice[L-1][C-1] + matrice[L-1][C] + matrice[L-1][C+1] +
    matrice[L][C-1] + matrice[L][C+1] + matrice[L+1][C-1] + matrice [L+1][C] 
    + matrice[L+1][C+1];
    
    return resultat;
}
