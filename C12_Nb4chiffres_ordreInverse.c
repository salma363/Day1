#include<stdio.h>

void main()
{
    int nombre, unite, dizaine, centaine, millier, inverse;

    printf("Entrez un nombre de 4 chiffres :");
    scanf("%d",&nombre);

    // 1234
    millier = nombre/1000; // 1
    centaine = (nombre/100) % 10; // 12 -> 2
    dizaine = (nombre/10) % 10; // 123 -> 3
    unite = nombre % 10; // 4

    inverse = unite * 1000 + dizaine * 100 + centaine * 10 + millier;
    printf("Le nombre inverse est : %d\n", inverse);
}
