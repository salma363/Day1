#include<stdio.h>

void main()
{
    int base, exp, i;
    int resultat = 1;

    printf("Entrez la base et l'exposant : ");
    scanf("%d %d", &base, &exp);

    for (i = 1; i <= exp; i++) {
        resultat *= base;
    }
    printf("%d^%d = %d\n", base, exp, resultat);
}
