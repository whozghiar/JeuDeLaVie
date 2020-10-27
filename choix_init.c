#include <stdio.h>
#include <stdlib.h>
#define tailleMatrice 10

void choix_init(int matrice [][tailleMatrice]) {

   int choix = 0;
   
   while((choix<1)||(choix>3)){
      printf("Choisissez un type d'initialisation (1 pour canon, 2 pour clignotants et 3 pour hasard \n");
      scanf("%d", &choix);
   }
   if(choix==1)
      init_canon(matrice);
   if (choix==2)
      init_clignotants(matrice);
   if (choix==3)
      init_random(matrice);

}


