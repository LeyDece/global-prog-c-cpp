
// 
// Contributeurs : 
// - Priestley D (Ley#1150)
// 

#include <stdio.h>

int main(void){
    int annee = 0;

    printf("Entrez une année et je vais vous dire si l'année que vous avez entrée est bissextile\n");

    scanf("%d",&annee);

    // Condition ternaire permet de réduire la taille de code
    // Si la condition est vraie alors cela exécute la première instruction après le "?" sinon cela exécutera la seconde
    ( (annee%4==0 && annee%100!=0) || (annee%400==0) ) ? printf("l'année est bissextile\n") : printf("l'année n'est pas bissextile\n");
}

