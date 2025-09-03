#include<stdio.h>

void main()
{
    int total, utilises, statut, restants;

    printf("Nombre total de jours de conges accordes : ");
    scanf("%d", &total);
    printf("Nombre de jours de conges utilises : ");
    scanf("%d", &utilises);
    printf("Statut (0 = temps partiel, 1 = temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1) restants = total - utilises;
    else restants = (total / 2) - utilises;

    if (restants < 0) {
        printf("Alerte : jours utilises depassent le quota !\n");
    } else {
        printf("Jours de conges restants : %d\n", restants);
    }

}
