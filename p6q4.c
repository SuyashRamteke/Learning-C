// Sum and avg of 2 numbers

#include<stdio.h>
void calc(int a, int b, int *sum, float *avg);
int main(){

    int a = 13, b = 7, sum;
    float avg;

    calc(a, b, &sum, &avg);
    printf("Sum : %d\n", sum);
    printf("Average : %f\n", avg);

    return 0;
}

void calc(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

/* We can return multiple values from a function. Return values from a void function!!
    */