// Multiplication table

#include<stdio.h>

int main(){
    int a, sum = 0;
    printf("Enter the number : \n");
    scanf("%d", &a);
    int i;
    printf("The Multiplication table sum is as follows : \n");
    for(i=1; i<=10; i++){
        sum += a*i;
    }
    printf("%d \n", sum);
    return 0;
}