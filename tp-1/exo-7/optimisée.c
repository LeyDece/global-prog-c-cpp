#include <stdio.h>
#include <stdlib.h>

unsigned int factorielle(int n);
unsigned int combinaison(int n, int p);

int main(void){
int n,p;
fflush(stdin);
printf("Entrez n et p pour connaître le nombre de combinaison de p élements parmi n? \n");
scanf("%d",&n);
scanf("%d",&p);

printf("Le nombre de combinaison de %d élements parmi %d est %d\n",p,n,combinaison(n,p));


}


unsigned int factorielle(int n){
    if(n<0){
        return EXIT_FAILURE;
    }
    else if(n==0 || n==1){
        return 1L;
    }

    return n*factorielle(n-1);
}

unsigned int combinaison(int n, int p){
    return factorielle(n)/(factorielle(p)*factorielle(n-p));
}