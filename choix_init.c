#include <stdio.h>
#include <stdlib.h>

int choix_init() {

   int choix = 0;
   
   while((choix<1)||(choix>3)){
      printf("Choisissez un type d'initialisation (1 pour planeur, 2 pour clignotants et 3 pour hasard \n");
      scanf("%d", &choix);
   }
   
   return choix;
}



