#include <stdio.h>

/*
void binaire(int n)
{
    if (n != 0)
    {
        binaire(n/2);
        printf("%d",n%2);
    }
}
*/

int main() {
    int nombre, n, i = 0;
    int binaire[32];
    char hexa[32];

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    n = nombre; // garder une copie
    if (n == 0) {
        printf("En binaire : 0\n");
        printf("Hexadecimal : 0\n");
        return 0;
    }

    // Conversion en binaire
    while (n > 0) {
        binaire[i++] = n % 2;
        n = n / 2;
    }

    printf("En binaire : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }

    printf("\n");

    // Conversion en hexadécimal

    i = 0;
    n = nombre;

    while (n > 0) {
        int reste = n % 16;

        if (reste < 10)
           hexa[i++] = '0' + reste;
        else
           hexa[i++] = 'A' + (reste - 10);

        n = n/16;
    }

    printf("En hexadecimal : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }

    return 0;
}
