#include<stdio.h>

float avg();

int main(){
    float a = avg();
    printf("%f\n", a);
    return 0;
}

float avg(){
    int a, b, c;
    float avg;
    printf("Enter the first number : \n");
    scanf("%d", &a);
    printf("Enter the second number : \n");
    scanf("%d", &b);
    printf("Enter the third number : \n");
    scanf("%d", &c); 

    avg = (a+b+c)/3;  
    return avg;    
}