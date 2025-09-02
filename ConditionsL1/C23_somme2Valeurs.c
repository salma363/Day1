#include<stdio.h>

void main() {

    int a, b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("Resultat = %d\n", 3 * (a + b));
    else
        printf("Resultat = %d\n", a + b);
}
