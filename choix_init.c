#include <stdio.h>
#include <stdlib.h>
#define tailleMatrice 10

void choix_init() {

   int choix;
   while((choix<1)||(choix>3)){
      printf("Choisissez un type d'initialisation (1 pour canon, 2 pour clignotants et 3 pour hasard");
      scanf("%d", &choix);
   }

}

int main( ) {

   choix_init();
   return 0;
}
