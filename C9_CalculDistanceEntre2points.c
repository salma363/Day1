#include<stdio.h>
#include<math.h>

void main()
{
    double x1, x2, y1, y2, z1, z2, distance;

    printf("Entrez les coordonnees du premier point (x1 y1 z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Entrez les coordonnees du deuxième point (x2 y2 z2) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La distance entre les deux points est : %.2f\n", distance);

}
