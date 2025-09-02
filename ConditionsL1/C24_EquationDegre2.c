#include<stdio.h>

void main()
{
    float a, b, c, delta, x1, x2;

    printf("Equation s\ecrit sous forme ax^2 + bx + c = 0\n");
    printf("Entrez a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
        printf("Pas de solution reelle.\n");
    else if (delta == 0)
        printf("Une solution: x = %.2f\n", -b/(2*a));
    else {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("Deux solutions: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}
