#include<stdio.h>
#include<time.h>

void main()
{

    srand(time(NULL));
    int index = rand() % 7;

    switch(index)
    {
    case 0:
        printf("Jour choisi au hasard : Lundi");
        break;
    case 1:
        printf("Jour choisi au hasard : Mardi");
        break;
    case 2:
        printf("Jour choisi au hasard : Mercredi");
        break;
    case 3:
        printf("Jour choisi au hasard : Jeudi");
        break;
    case 4:
        printf("Jour choisi au hasard : Vendredi");
        break;
    case 5:
        printf("Jour choisi au hasard : Samedi");
        break;
    case 6:
        printf("Jour choisi au hasard : Dimanche");
        break;
    default:
        printf("Mois invalide");
    }
}
