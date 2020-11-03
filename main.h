#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TailleMatrice 10

//Prototypes des fonctions

int choix_init();
void init_clignotant(int matrice[][TailleMatrice]);
void init_planeur(int matrice[][TailleMatrice]);
void init_hasard(int matrice[][TailleMatrice]);
void affichage(int matrice[][TailleMatrice]);
int compte_voisin(int matrice[][TailleMatrice], int L, int C);
void cycle(int matrice[][TailleMatrice]);