#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TailleMatrice 10

int choix_init();
void init_clignotant(int matrice[][TailleMatrice]);
void init_planeur(int matrice[][TailleMatrice]);
void init_hasard(int matrice[][TailleMatrice]);
void affichage(int matrice[][TailleMatrice]);
int compte_voisin(int matrice[][TailleMatrice], int L, int C);
void cycle(int matrice[][TailleMatrice]);

/** 
 * La fonction choix_init renvoie la variable choix, un entier, qui est défini par la saisie de l'utilisateur. 
*/

int choix_init() {
   int choix = 0; // On initialise la variable choix comme un entier initialisé à 0.
   while((choix<1)||(choix>3)){ // Tant que le choix n'est pas correct, on propose à l'utilisateur d'entrer le type d'initialisation que l'on souhaite.
      printf("Choisissez un type d'initialisation (1 pour planeur, 2 pour clignotants et 3 pour hasard \n");
      scanf("%d", &choix);
   }
   
   return choix;
}

void init_clignotant(int matrice[][TailleMatrice]) {
   int i,j;
   for (i=0;i<TailleMatrice;i++)
      for (j=0;j<TailleMatrice;j++)
         matrice[i][j]=0;
   
   matrice[3][4]=1;
   matrice[4][4]=1;
   matrice[5][4]=1;
}

void init_planeur(int matrice[][TailleMatrice]){
    int i,j;
    for (i=0; i < TailleMatrice;i++ ){
        for (j=0;j<TailleMatrice;j++){
            matrice[i][j]=0;
        }
    }
    matrice[1][2]=1;
    matrice[2][3]=1;
    matrice[3][1]=1;
    matrice[3][2]=1;
    matrice[3][3]=1;
}

void init_hasard(int matrice[][TailleMatrice]){
    int i,j,alea;
    srand(time(NULL));
    for (i = 0; i < TailleMatrice ; i++ ){
        for (j = 0; j < TailleMatrice ; j++){
            if ((i==0) || (j==0) || (i==TailleMatrice-1) || (j==TailleMatrice-1)){
                matrice [i][j]=0;
            }
            else{
                matrice[i][j]=rand()%2;
            }
        }
    }
}

void affichage(int matrice[][TailleMatrice]){
    int i,j;
    for (i = 1 ; i < TailleMatrice-1; i++){
        for (j = 1; j < TailleMatrice-1 ; j++){
            if (matrice[i][j]==1){
                printf(" *");
            }
            else{
                printf(" .");
            }
        }
        printf(" \n");
    }
}

int compte_voisin(int matrice[][TailleMatrice], int L, int C) {
    int resultat;
    resultat=matrice[L-1][C-1] + matrice[L-1][C] + matrice[L-1][C+1] +
    matrice[L][C-1] + matrice[L][C+1] + matrice[L+1][C-1] + matrice [L+1][C] 
    + matrice[L+1][C+1];
    return resultat;
}

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

int main(){

    int Model;
    char C; 
    int matrice[TailleMatrice][TailleMatrice];

    Model=choix_init();
    if(Model==1)
        init_planeur(matrice);
    if(Model==2)
        init_clignotant(matrice);
    if(Model==3)
        init_hasard(matrice);
    
    printf("Affichage au debut (Vivant = * ) \n");
    affichage(matrice);
    printf("Cycle suivant\n");
    C='\n';
    while(C=='\n'){
        cycle(matrice);
        affichage(matrice);
        printf("Appuyez sur ENTER pour continuer, pour s'arreter appuyez sur une autre touche puis ENTER\n");
        scanf("%c",&C);
    }
    return 0;
}