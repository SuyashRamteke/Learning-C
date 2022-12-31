//Factorial

#include<stdio.h>

int main(){
    int num, fact = 1;
    printf("Enter the number : \n");
    scanf("%d", &num);

    while(num>0){
        fact *= num;
        num--;
    }
    printf("%d", fact);
}