// First 10 natural number sum using do-while

#include<stdio.h>

int main(){
    int a = 0, sum = 0;
    do{
        sum += a;
        a = a + 1;
    }
    while(a<=10);

    printf("The sum of first 10 natural numbers is : %d", sum);
    return 0;
}