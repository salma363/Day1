#include<stdio.h>

void main(){

    int age;
    char nom[15], prenom[10], sexe[10], email[40];

    printf("Entrez votre nom SVP : ");
    scanf("%s",&nom);
    printf("Entrez votre prenom SVP : ");
    scanf("%s",&prenom);
    printf("Entrez votre age SVP : ");
    scanf("%d",&age);
    printf("Entrez votre sexe SVP : ");
    scanf("%s",&sexe);
    printf("Entrez votre adresse email SVP : ");
    scanf("%s",&email);

    printf("\n===== Vos informations personnelles =====\n");
    printf("Nom       : %s\n", nom);
    printf("Prenom    : %s\n", prenom);
    printf("Age       : %d ans\n", age);
    printf("Sexe      : %s\n", sexe);
    printf("Email     : %s\n", email);

}
