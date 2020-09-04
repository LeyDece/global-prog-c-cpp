// 
// Contributeurs : 
// - Guillaume C (Guillaume#1619)
// 

#include <stdio.h>

int main()
{
    int annee;
    
    printf("Entrez une année :");
    scanf("%d", &annee);
    
    if(annee % 4 == 0 && (annee % 100 == 0 && (annee % 400 == 0))){
        printf("Année bissextile\n");
    }else{
        printf("Pas année bissextile\n");
    }

    return 0;
}