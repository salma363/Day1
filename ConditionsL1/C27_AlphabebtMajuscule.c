#include<stdio.h>

void main()
{
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("Le caractere est une lettre majuscule.\n");
    } else {
        printf("Le caractere n\'est pas une lettre majuscule.\n");
    }
}
