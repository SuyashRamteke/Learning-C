#include<stdio.h>

int main(){
    int c = 10;

    int i;
    printf("Multiplication table of 10 in reverse order : \n");
    for(i=10; i>=1; i--){
        printf("%d\n", c*i);
    }
    return 0;
}