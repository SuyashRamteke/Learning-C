//Program to represent a complex number

#include<stdio.h>

typedef struct complexNumber{
    float real;
    float imag;
} complex;

int main(){
    complex c1;
    c1.real = 1.24;
    c1.imag = 0.79;

    printf("Complex Number is : %f + j%f", c1.real, c1.imag);
    return 0;
}