#include <stdio.h>
#include <stdlib.h>

#define TailleMatrice 10;

void affiche_ligne(int ligne){
    int k;
    for (k = 0 ; k < ligne; k++){
        printf("--");
    }
    printf("-\n");
}

