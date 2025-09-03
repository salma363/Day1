#include<stdio.h>

void main()
{
    float revenu;
    int score, duree;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);
    printf("Entrez votre score de credit (sur 1000) : ");
    scanf("%d", &score);
    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Eligibilite : Eligible.\n");
    } else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Eligibilite : Eligible avec conditions.\n");
    } else {
        printf("Eligibilite : Non eligible.\n");
    }
}
