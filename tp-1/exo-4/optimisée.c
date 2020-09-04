// 
// Contributeurs : 
// - Guillaume C (Guillaume#1619)
// 

#include <stdio.h>

int demander(void);

int main()
{
    printf("h:");
    int heure = demander();

    printf("m:");
    int minutes = demander();
    
    printf("s:");
    int secondes = demander();

    printf("%d:%d:%d", heure, minutes, secondes);

    return 0;
}

int demander(void) {
    int value = 0;
    //On est pas obligé de définir un corps à la boucle while (si on en a pas besoin), ici cela revient à ecrire while(scanf("%d", &value) == 0){}
    //On profite également de la boucle pour effectuer une affectation et une vérification comme ça on gagne des lignes
    //Sinon on aurait du faire quelque chose comme : 
    //  int res = 0;
    //  while(res == 0) {
    //      res = scanf("%d", &value);
    //  }
    while(scanf("%d", &value) == 0);
    return value;
}
