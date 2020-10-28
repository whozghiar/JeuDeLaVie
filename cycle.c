#include <stdio.h>
#include <stdlib.h>
#define TailleMatrice 10 

/** 
 * La fonction compte_voisin renvoie la variable resultat, un entier, qui est obtenue en calculant le nombre de voisin d'une cellule. 
 * 
 * @param matrice une matrice qui contient des entiers, de taille TailleMatrice
 * 
 * Elle fait la mise a jour d'un cycle du jeu. On commence par copier la matrice dans matrice de tye entier "CopieMatrice"
 * On parcourt ensuite la matrice en calculant les voisins grace a la fonction compte_voisin puis elle vérifie
 * si la cellule est vivante et possède 2 voisins ou si elle possède 3 voisins, si c'est le cas elle y met 1 (vivante)
 * sinon elle met 0 (morte). 
 * 
 * Cette fonction ne retourne rien. 
*/

void cycle(int matrice[][TailleMatrice]) {
    
    int i,j, nbVoisin;
    int copieMatrice[TailleMatrice][TailleMatrice];
    for(i=0;i<TailleMatrice;i++){
        for(j=0;j<TailleMatrice;j++){
            copieMatrice[i][j]=matrice[i][j];
        }
    }
    
    for(i=1;i<TailleMatrice-1;i++){
        for(j=1;j<TailleMatrice-1;j++){
            nbVoisin=compte_voisin(copieMatrice,i,j);
            if(((matrice[i][j]==1)&&(nbVoisin==2))||(nbVoisin==3)){
                matrice[i][j]=1;
            }
            else{
                matrice[i][j]=0;
            }
        }
    }   
}
