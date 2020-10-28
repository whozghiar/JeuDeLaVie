#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10

/** 
 * La fonction init_clignotant permet d'initialiser un clignotant dans la matrice.
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * 
 * Elle initialise des coordonnées de la matrice à 1 de sorte à former le clignotant. 
 * 
 * Cette fonction ne retourne rien. 
*/



void init_clignotant(int matrice[][TailleMatrice]) {

   int i,j;
   for (i=0;i<TailleMatrice;i++)
      for (j=0;j<TailleMatrice;j++)
         matrice[i][j]=0;
   
   matrice[3][4]=1;
   matrice[4][4]=1;
   matrice[5][4]=1;
   
}