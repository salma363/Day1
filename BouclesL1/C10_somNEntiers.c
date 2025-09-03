#include<stdio.h>

void main()
{
    int n, i, somme = 0;
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        somme += i;
        i++;
    }
    printf("Somme des %d premiers entiers = %d\n", n, somme);
}
