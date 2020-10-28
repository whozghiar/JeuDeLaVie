#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10 

/** 
 * La fonction compte_voisin renvoie la variable resultat, un entier, qui est obtenue en calculant le nombre de voisin d'une cellule. 
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * @param L Un entier qui correspond a la ligne.
 * @param C Un entier qui correspond a la colonne.
 * 
 * Elle calcul le nombre de voisin d'une cellule. On fait un calcul qui permet de faire la somme des voisins de matrice[L][C]. 
 * Chaque case étant égale à 0 ou 1 on obtient donc la somme des voisins vivants.
 * 
 * @return resultat, un entier qui contient le nombre de voisin de la cellule
*/

int compte_voisin(int matrice[][TailleMatrice], int L, int C) { 
    int resultat;
    resultat=matrice[L-1][C-1] + matrice[L-1][C] + matrice[L-1][C+1] +
    matrice[L][C-1] + matrice[L][C+1] + matrice[L+1][C-1] + matrice [L+1][C] 
    + matrice[L+1][C+1]; 
    
    return resultat; 
}
