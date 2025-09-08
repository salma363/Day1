#include <stdio.h>

int main() {
    float consommation, facture;
    int typeUtilisateur, typeContrat;

    printf("Entrez votre consommation (kWh) : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur (1 = Résidentiel, 2 = Commercial) : ");
    scanf("%d", &typeUtilisateur);

    printf("Entrez le type de contrat (0 = Standard, 1 = Réduit) : ");
    scanf("%d", &typeContrat);

    float tarif;
    if (typeUtilisateur == 1) { // Résidentiel
        if (typeContrat == 0)
            tarif = 0.20;
        else
            tarif = 0.15;
    } else if (typeUtilisateur == 2) { // Commercial
        if (typeContrat == 0)
            tarif = 0.30;
        else
            tarif = 0.25;
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 1;
    }

    facture = consommation * tarif;

    if (consommation > 500) {
        facture += facture * 0.10; 
    }

    printf("Votre facture d'électricité est : %.2f €\n", facture);

    return 0;
}
