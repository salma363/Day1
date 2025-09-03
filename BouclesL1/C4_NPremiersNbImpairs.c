#include<stdio.h>

void main()
{
    int n, i, compteur = 1;
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", compteur);
        compteur += 2;
    }
}

