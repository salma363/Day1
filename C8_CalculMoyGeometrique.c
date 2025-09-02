#include<stdio.h>

void main()
{
    double a, b, c, moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &c);

    moyenne = pow(a * b * c, 1.0 / 3.0);
    printf("La moyenne geometrique est : %.2f\n", moyenne);
}
