#include "main.h"

int main(){

    int Model;
    char C; 
    int matrice[TailleMatrice][TailleMatrice]; // Variable matrice qui correspond a la grille de jeu

    Model=choix_init(); // On appelle la fonction choix_init pour choisir le type de motif.
    if(Model==1) // Si le model est le 1 alors on appelle init_planeur.
        init_planeur(matrice);
    if(Model==2) // Si le model est le 2 alors on appelle init_clignotant.
        init_clignotant(matrice);
    if(Model==3) // Si le model est le 3 alors on appelle init_hasard.
        init_hasard(matrice);
    
    printf("Affichage au debut (Vivant = * ) \n");
    affichage(matrice); // On appelle la fonction affichage pour afficher la grille de jeu au début
    printf("Cycle suivant\n");
    C='\n'; //On initialise la variable caractère C avec ENTER
    while(C=='\n'){ // Tant que C est égal à ENTER on continue les cycles.
        cycle(matrice); // On appelle cycle pour faire la mise a jour de chaque cycle de jeu.
        affichage(matrice);
        printf("Appuyez sur ENTER pour continuer, pour s'arreter appuyez sur une autre touche puis ENTER\n");
        scanf("%c",&C); // On demande a l'utilisateur si il veut continuer en appuyant sur ENTER ou non en appuyant sur autre chose.
    }
    return 0;
}