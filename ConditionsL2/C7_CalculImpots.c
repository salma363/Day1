#include <stdio.h>

int main() {
    float revenu, deductions, impots;
    int statut;

    printf("Entrez votre revenu annuel (Euro) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1=Célibataire, 2=Marié, 3=Chef de famille) : ");
    scanf("%d", &statut);

    // Déductions selon le statut
    switch(statut) {
        case 1: deductions = 1000; break;
        case 2: deductions = 2000; break;
        case 3: deductions = 3000; break;
        default: 
            printf("Statut invalide.\n");
            return 1;
    }

    // Application de la déduction
    revenu -= deductions;

    // Taux d’imposition
    if (revenu <= 20000) {
        impots = revenu * 0.05;
    } else if (revenu <= 50000) {
        impots = revenu * 0.10;
    } else {
        impots = revenu * 0.20;
    }

    printf("Impôts à payer : %.2f Euro\n", impots);
    return 0;
}
