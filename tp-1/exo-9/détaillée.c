#include <stdio.h>
#include <stdlib.h>

struct bureauDeVote{
    unsigned int nbElecteursPrevus;
    unsigned int nbVotants;
    unsigned int nbVoteBlanc;
    nb

};

int main(void){
    int nbCandidats=0;
    int nbBureauVote=0;
    

    printf("Entrez le nombre de candidats à l'élection\n");
    scanf("%d", &nbCandidats);
    
    while(nbCandidats<2){
        printf("Une élection doit au moins comporter 2 candidats\n");
        scanf("%d",&nbCandidats);
    }

    printf("Veuillez entrer le nombre de bureau de vote\n");
    scanf("%d",&nbBureauVote);
    





}