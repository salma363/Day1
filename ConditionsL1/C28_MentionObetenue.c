#include<stdio.h>

void main()
{
    float moyenne;
    printf("Entrez la moyenne de l\'etudiant : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recale\n");
    } else if (moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne < 16) {
        printf("Mention : Bien\n");
    } else {
        printf("Mention : Tres bien\n");
    }
}
