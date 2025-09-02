#include<stdio.h>

void main(){

    float celsius, kelvin;

    printf("Veuiller entrer une tmperature SVP : ");
    scanf("%f",&celsius);
    kelvin = celsius + 273.5;
    printf("Temperature en Kelvin : %.2f K\n", kelvin);
}
