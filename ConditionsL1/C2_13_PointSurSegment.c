#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x, y;

    printf("Entrez les coordonnees du point A (x1 y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnées du point B (x2 y2) : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnées du point P (x y) : ");
    scanf("%f %f", &x, &y);

    // Verification de l'alignement
    float condAlignement = (y - y1) * (x2 - x1) - (x - x1) * (y2 - y1);

    // Verification inclusion dans les bornes du segment
    int condSegment = (x >= (x1 < x2 ? x1 : x2) && x <= (x1 > x2 ? x1 : x2))&&
                      (y >= (y1 < y2 ? y1 : y2) && y <= (y1 > y2 ? y1 : y2));

    if (condAlignement == 0 && condSegment) {
        printf("Le point (%.2f, %.2f) est sur le segment.\n", x, y);
    } else {
        printf("Le point (%.2f, %.2f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
