#include<stdio.h>

void main()
{
    int annee, choix;
    printf("Entrez une annee : ");
    scanf("%d", &annee);
    printf("Convertir en :\n1. Mois\n2. Jours\n3. Heures\n4. Minutes\n5. Secondes\n");
    scanf("%d", &choix);

    switch (choix) {
        case 1: printf("%d annees = %d mois\n", annee, annee*12); break;
        case 2: printf("%d annees = %d jours\n", annee, annee*365); break;
        case 3: printf("%d annees = %d heures\n", annee, annee*365*24); break;
        case 4: printf("%d annees = %d minutes\n", annee, annee*365*24*60); break;
        case 5: printf("%d annees = %d secondes\n", annee, annee*365*24*3600); break;
        default: printf("Choix invalide\n");
    }
}
