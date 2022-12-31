// Recursive program to calculate the sum of natural numbers
/*
    Sum of first n natural numbers
    Sn = 1 + 2 + 3 + 4 +.....(n-2) + (n-1) + n
    Sn = n + Sn-1 
    */

#include<stdio.h>

int sumOfN(int n);

int main(){
    int sum = sumOfN(10);
    printf("The sum of first N natural numbers is : %d\n", sum);
    return 0;
}

int sumOfN(int n){
    if(n == 0)
        return 0;
    else
        return n + sumOfN(n-1);
}