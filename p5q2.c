//Temperature conversion
#include <stdio.h>

float calc_temp();

int main(){

    float t = calc_temp();
    return 0;
}

float calc_temp(){

    float cel;
    printf("Enter the temperature in celsius : \n");
    scanf("%f", &cel);
    float fah = 1.8*cel + 32;

    printf("The temperature in fahrenheit is : %f \n", fah);
    return 0;

}