#include<stdio.h>

void main(){

    float a, b;

    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre (b) : ");
    scanf("%f", &b);

    printf("\nResultats des operations :\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("a / b = Erreur (division par zéro !)\n");
    }

}
