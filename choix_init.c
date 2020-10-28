#include <stdio.h>
#include <stdlib.h>

/** 
 * La fonction choix_init ne possède pas de paramètres.
 * 
 * 
 * @return choix un entier, qui est défini par la saisie de l'utilisateur. 
*/

int choix_init() {
   int choix = 0; // On initialise la variable choix comme un entier initialisé à 0.
   while((choix<1)||(choix>3)){ // Tant que le choix n'est pas correct, on propose à l'utilisateur d'entrer le type d'initialisation que l'on souhaite.
      printf("Choisissez un type d'initialisation (1 pour planeur, 2 pour clignotants et 3 pour hasard \n");
      scanf("%d", &choix);
   }
   
   return choix; 
}

