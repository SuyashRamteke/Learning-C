// Program to illustrate arrow -> operator
#include<stdio.h>
typedef struct greyscale{
    float white;
    float black;
} grey;

int main(){
    grey g1, *ptr;
    
    g1.white = 0.70;
    g1.black = 0.30;

    ptr = &g1;

    // (*ptr).white = 0.70;
    // (*ptr).black = 0.30

    printf("White Conc : %f\n", (*ptr).white);
    printf("White Conc with Arrow operator: %f\n", ptr->white);
    
    return 0;
}