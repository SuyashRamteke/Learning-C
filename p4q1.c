// Multiplication table

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number : \n");
    scanf("%d", &a);
    int i;
    printf("The Multiplication table is as follows : \n");
    for(i=1; i<=10; i++){
        printf("%d \n", a * i);
    }
    return 0;
}