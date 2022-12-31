// First 10 natural number sum

#include<stdio.h>

int main(){
    int a = 1, sum = 0;
    while(a<=10)
    {
        sum += a;
        a = a + 1;
    }
    printf("The sum of first 10 natural numbers is : %d", sum);

    return 0;
}