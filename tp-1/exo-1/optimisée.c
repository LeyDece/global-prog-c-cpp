// 
// Contributeurs : 
// - Guillaume C (Guillaume#1619)
// - Cedric B (triozer#4242)
// 

#include <stdio.h>

int main()
{
    int j, m, a = 0;
    char * jours[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    printf("Entrez une date (j/m/a) : ");
    scanf("%d/%d/%d", &j, &m, &a);
    
    int s = a / 100;
    if (m == 1 || m == 2){
        m += 12;
        a -= 1;
    }
    int JD = 1720996.5 - s +  (int) (s / 4) +  (int) (365.25 * a) +  (int) (30.6001 * (m + 1)) + j;
    JD = JD - (JD / 7) * 7;
    JD = JD % 7;
    
    printf("Nous sommes un : %s\n", jours[(JD + 2) % 7 - 1]);
    return 0;
}