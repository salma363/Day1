#include<stdio.h>

void main()
{
    int age, type, accidents;
    float primeBase = 500, prime;

    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez le type de voiture (1-sportive, 2-utilitaire, 3-familiale) : ");
    scanf("%d", &type);
    printf("Entrez le nombre d'accidents sur 5 ans : ");
    scanf("%d", &accidents);

    if (age < 25) prime = primeBase * 1.5;
    else if (age <= 65) prime = primeBase;
    else prime = primeBase * 1.2;

    if (type == 1) prime *= 2;
    else if (type == 2) prime *= 1.2;
    else if (type == 3) prime *= 1.1;

    if (accidents > 1) prime *= 1.3;

    printf("Prime d'assurance : %.2f Euros\n", prime);
}
