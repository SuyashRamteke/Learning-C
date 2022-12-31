// Gravity

#include<stdio.h>

float gravity();

int main(){
    gravity();
    return 0;
}

float gravity(){
    float m, g = 9.8;

    printf("Enter the mass : \n");
    scanf("%f", &m);
    float force = m * g;
    printf("The force is : %f\n N", force);
    return 0;
}