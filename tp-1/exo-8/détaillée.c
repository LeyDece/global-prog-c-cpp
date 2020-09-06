#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(int ** tab, int taille);
void affiche(int ** tab, int taille);
void check(int *ligne, int *col, int *taille);
void remplissage(int ** tab, int taille);

int main(void){

    fflush(stdin);
    int taille=0;
    int i;
    printf("Veuillez entrer la taille du tableau");
    while(taille%2==0){
    printf("Veuillez entrer une taille d'ordre impaire\n");
    scanf("%d",&taille);
    }

    //allocation dynamique de mémoire
    int** tab = (int**) malloc(taille * sizeof (int*) );
    for (i=0; i<taille; i++)
    {
    tab[i] = (int*) malloc (taille * sizeof (int) );
    }

    //initialisation du tableau à 0
    init(tab,taille);

    //remplissage du tableau selon l'algorithme
    remplissage(tab, taille);

    //affichage du tableau
    affiche(tab,taille);
    


    //désallocation de mémoire (libère la mémoire réservée pour stocker le tableau)
    for (i=0; i<taille; i++)
    {
    free (tab[i]);
    }

}


void init(int ** tab, int taille){
    for(int i = 0;i<taille;i++){
        for(int j=0;j<taille;j++){
            tab[i][j]=0;
        }
    }
}

void affiche(int ** tab, int taille){
    for(int i=0 ; i<taille;i++){
        for(int j=0;j<taille;j++){
            printf("|  %d  |",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void check(int *ligne, int *col, int *taille){
    if(*ligne<0){*ligne=(*taille)-1;}
    if(*col>*taille-1){*col=0;}
    if(*col<0){*col = (*taille)-1;} 
}

void remplissage(int ** tab, int taille){
    int col,ligne;
    ligne = 0;
    col = (int)ceil(taille/2);
    for(int i = 0;i<taille*taille;i++){
        if(tab[ligne][col]==0){
        tab[ligne][col]=i+1;
        ligne--;
        col++;
        check(&ligne,&col,&taille);
        }

        else{
            while(tab[ligne][col]!=0){
                ligne--;
                col--;
                check(&ligne,&col,&taille);
                if(tab[ligne][col]==0){
                    tab[ligne][col]=i+1;
                    ligne--;
                    col++;
                    check(&ligne,&col,&taille);
                    break;
                }
            }
        }
    
    }
            affiche(tab,taille);
}