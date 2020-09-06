#include <stdio.h>

int main(void){
    float x;
    int y;
    float res =1;
    printf("Entrez une puissance de la forme : x^y avec x réel et y entier\n");

    scanf("%f^%d",&x,&y);
    for(int i=0;i<y;i++){   
        res = res*x;
    }

    printf("%f", res);
}