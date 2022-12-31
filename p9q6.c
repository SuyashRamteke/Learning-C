//Array of 5 complex numbers

#include<stdio.h>

typedef struct complexNumber{
    float real;
    float imag;
} complex;

void display(complex nums); 

int main(){
    complex nums[5];

    int i, j;
    for(i=0; i<5; i++){
        printf("Enter the complex coordinates : \n");
        scanf("%f", &nums[i].real);
        scanf("%f", &nums[i].imag);
    }
    printf("Complex numbers : \n");
    for(j=0; j<5; j++){
        display(nums[j]);
    }
    
    return 0;
}

void display(complex nums){
    int i; 

    printf("(%f + j%f)\n", nums.real, nums.imag);
    
}