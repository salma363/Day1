#include <stdio.h>

int main() {
    int age, annees;
    float epargne, bonus = 0;

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez vos années de cotisation : ");
    scanf("%d", &annees);

    printf("Entrez le montant total épargné (Euro) : ");
    scanf("%f", &epargne);

    // Calcul du bonus : 5% par tranche de 10 000 au-delà de 50 000
    if (epargne > 50000) {
        int tranches = (epargne - 50000) / 10000;
        bonus = epargne * (0.05 * tranches);
    }

    if (age >= 65 && annees >= 30 && epargne >= 100000) {
        printf("Plan recommandé : Complet avec pension élevée\n");
    } else if (age >= 65 && annees >= 20 && epargne >= 50000) {
        printf("Plan recommandé : Partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan recommandé : Épargne non encore disponible\n");
    } else {
        printf("Conditions insuffisantes pour un plan de retraite\n");
    }

    printf("Bonus épargne : %.2f €\n", bonus);
    return 0;
}
