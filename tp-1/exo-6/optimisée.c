#include <stdio.h>
#include <stdlib.h>

unsigned int factorielle(int n);

int main(void){
fflush(stdin);
int entry;
printf("De quel nombre voulez vous la factorielle ? \n");
scanf("%d",&entry);

printf("La factorielle de %d est %d\n",entry,factorielle(entry));

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