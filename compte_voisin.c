#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10 

/** 
 * La fonction compte_voisin renvoie la variable resultat, un entier, qui est obtenue en calculant le nombre de voisin d'une cellule.
*/

int compte_voisin(int matrice[][TailleMatrice], int L, int C) { 
    //@Param matrice Une matrice de taille TailleMatrice qui contient des entiers.
    //@Param L Un entier qui correspond a la ligne.
    //@Param C Un entier qui correspond a la colonne.
    int resultat; // On initialise la variable resultat comme un entier.
    resultat=matrice[L-1][C-1] + matrice[L-1][C] + matrice[L-1][C+1] +
    matrice[L][C-1] + matrice[L][C+1] + matrice[L+1][C-1] + matrice [L+1][C] 
    + matrice[L+1][C+1]; // Ce calcul permet de faire la somme des voisins de matrice[L][C]. 
    //Chaque case étant égale à 0 ou 1 on obtient donc la somme des voisins vivants.
    
    return resultat; // On retourne la variable resultat qui contient le nombre de voisin de la cellule.
}
