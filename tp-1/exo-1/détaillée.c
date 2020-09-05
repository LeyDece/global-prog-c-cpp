// 
// Contributeurs : 
// - Nicolas O. (Ｌｏａｄ#1939)
// - Cédric B (triozer#4242)
// 

#include <stdio.h>

int main()
{
    // On vide le buffer, pour éviter des mauvaises surprises
    fflush(stdin);

    // On déclare et initialise les variables que devra entrer l'utilisateur
    unsigned int j = 0, m = 0, a = 0;

    printf("Entrez la date au format jj/mm/aaaa :\n");

    // On récupère l'entrée utilisateur et on stocke leur valeur
    scanf("%d/%d/%d", &j,&m,&a);

    // On s'assure que l'année soit correcte
    if (a < 1583)
    {
        printf("Saisie incorrecte, fin du programme.");
        return 0;
    }

    // Dans les lignes qui suivent on implémente l'algoritme permettant de trouver le jour
    unsigned int s = a / 100;
    if (m == 1 || m == 2)
    {
        m += 12;
        a -= 1;
    }

    unsigned int JD = 1720996.5 - s + (unsigned int)(s / 4) + (unsigned int)(365.25 * a) + (unsigned int)(30.6001 * (m + 1)) + j;
    JD = JD - (JD / 7) * 7;

    unsigned int JS = JD % 7;

    // On affiche la date en fonction de la valeur du modulo
    switch (JS)
    {
        case 0:
            printf("Le jour est mardi.");
            break;
        case 1:
            printf("Le jour est mercredi.");
            break;
        case 2:
            printf("Le jour est jeudi.");
            break;
        case 3:
            printf("Le jour est vendredi.");
            break;
        case 4:
            printf("Le jour est samedi.");
            break;
        case 5:
            printf("Le jour est dimanche.");
            break;
        case 6:
            printf("Le jour est lundi.");
            break;
        default:
            break;
    }

    return 0;
}
