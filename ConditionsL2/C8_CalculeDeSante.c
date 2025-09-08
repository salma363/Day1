#include <stdio.h>

int main() {
    int age, historique, couverture;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Historique medical (0=Aucun, 1=Mineur, 2=Majeur) : ");
    scanf("%d", &historique);

    printf("Type de couverture (1=Base, 2=Etendue) : ");
    scanf("%d", &couverture);

    // Détermination du plan
    if (age < 30) {
        printf("Plan recommande : Plan de base\n");
    } else if (age >= 30 && historique == 0) {
        printf("Plan recommande : Plan de base\n");
    } else if (age >= 30 && historique >= 1) {
        printf("Plan recommande : Plan etendu\n");
    }

    // Couverture supplémentaire si problème majeur
    if (historique == 2) {
        printf("Couverture supplementaire obligatoire pour problemes majeurs\n");
    }

    return 0;
}
