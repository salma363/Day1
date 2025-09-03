#include<stdio.h>

void main()
{
    int n, compteur = 0;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n == 0) compteur = 1;
    while (n != 0) {
        n /= 10;
        compteur++;
    }
    printf("Nombre de chiffres = %d\n", compteur);
}
