// 
// Contributeurs : 
// - Guillaume C (Guillaume#1619)
// 

#include <stdio.h>

int main()
{
    int reponse;

    printf("C'est quoi la bonne réponse ? \n");
    printf("#1 - Rep 1\n");
    printf("#2 - Rep 2\n");
    printf("#3 - Rep 3\n");
    printf("#4 - Rep 4\n");
    printf("La bonne réponse est la réponse : ");
    
    scanf("%d", &reponse);

    if(reponse == 2) {
        printf("Bravo !\n");
    } else {
        printf("Perdu :(\n2");
    }

    return 0;
}