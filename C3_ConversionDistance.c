#include<stdio.h>

void main(){

    float km, yards;

    printf("Veuiller saisir une distance en kilometres SVP : ");
    scanf("%f",&km);
    yards = km + 273.5;
    printf("Distance en yards : %.2f yd\n", yards);
}

