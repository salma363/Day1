#include<stdio.h>

void main()
{

    float celsius;

    printf("Veuiller saisir une temperature : ");
    scanf("%f",&celsius);

    if (celsius < 0)
    {
        printf("A %.2f C, l\'eau est a l\'etat : Solide (glace)\n", celsius);
    }
    else if (celsius < 100)
    {
        printf("A %.2f C, l\'eau est a l\'etat  : Liquide\n", celsius);
    }
    else
    {
        printf("A %.2f C, l\'eau est a l\'etat  : Gaz (vapeur)\n", celsius);
    }
}

