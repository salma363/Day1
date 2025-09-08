#include <stdio.h>

int main() {
    float budget;
    int destination, personnes;

    printf("Entrez votre budget en euros : ");
    scanf("%f", &budget);

    printf("Choisissez une destination (1=Plage, 2=Montagne, 3=Ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    if (budget >= 1000) {
        printf("Type de voyage : Haut de gamme\n");
    } else if (budget >= 500) {
        printf("Type de voyage : Moyen\n");
    } else {
        printf("Type de voyage : Économique\n");
    }

    if (budget >= 1000 && personnes > 2) {
        printf("Destination recommandée : Plage \n");
    } else if (budget >= 500 && personnes <= 2) {
        printf("Destination recommandée : Montagne \n");
    } else {
        printf("Destination recommandée : Ville \n");
    }

    return 0;
}
