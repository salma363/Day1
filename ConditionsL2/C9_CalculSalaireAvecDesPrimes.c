#include <stdio.h>

int main() {
    float salaireBase, salaireTotal, tauxHoraire;
    int heuresSup, poste;

    printf("Entrez le salaire de base (Euro) : ");
    scanf("%f", &salaireBase);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%d", &heuresSup);

    printf("Type de poste (1=Junior, 2=Senior) : ");
    scanf("%d", &poste);

    // Hypothèse : 160 heures de travail par mois
    tauxHoraire = salaireBase / 160;

    // Salaire total = salaire de base + rémunération heures sup
    salaireTotal = salaireBase + (heuresSup * tauxHoraire * 1.5);

    // Prime selon le poste
    if (poste == 1) {
        salaireTotal += salaireBase * 0.10; // Junior
    } else if (poste == 2) {
        salaireTotal += salaireBase * 0.20; // Senior
    } else {
        printf("Type de poste invalide.\n");
        return 1;
    }

    printf("Salaire total avec primes : %.2f Euro\n", salaireTotal);
    return 0;
}
