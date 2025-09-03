#include<stdio.h>

void main() {
    int n, i, somme = 0;
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }
    printf("La somme des %d premiers nombres naturels = %d\n", n, somme);
}
