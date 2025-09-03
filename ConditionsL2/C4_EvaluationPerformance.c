#include<stdio.h>

void main()
{
    int score, anciennete, recompenses;
    float bonus = 0;

    printf("Score de performance (0-100) : ");
    scanf("%d", &score);
    printf("Anciennete (en annees) : ");
    scanf("%d", &anciennete);
    printf("Recompenses (0=aucune, 1=une, 2=deux ou +) : ");
    scanf("%d", &recompenses);

    if (score >= 90 && anciennete >= 5) printf("Evaluation : Excellente\n");
    else if (score >= 75 && anciennete >= 3) printf("Evaluation : Bonne\n");
    else if (score >= 50 && anciennete < 3) printf("Evaluation : Satisfaisante\n");
    else printf("Evaluation : Insuffisante\n");

    if (recompenses == 1) bonus = 0.1;
    else if (recompenses >= 2) bonus = 0.2;

}
