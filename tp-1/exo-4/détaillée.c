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
    while(scanf("%d", &value) == 0);
    return value;
}
