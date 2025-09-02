#include<stdio.h>
#include<math.h>
#define PI 3.14

void main()
{
    double rayon, volume;

    printf("Entrez le rayon de la sphere : ");
    scanf("%lf", &rayon);

    volume = (4.0 / 3.0) * PI * pow(rayon, 3);
    printf("Le volume de la sphere est : %.2f\n", volume);
}
