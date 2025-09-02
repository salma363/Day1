#include<stdio.h>

 void main()
 {
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("C'est un alphabet.\n");
        if (c >= 'A' && c <= 'Z') {
            printf("Il est majuscule.\n");
        } else {
            printf("Il est minuscule.\n");
        }
    } else {
        printf("Ce n'est pas un alphabet.\n");
    }
 }
