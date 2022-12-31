#include<stdio.h>

int main(){
    
    int a, b, c;
    FILE *ptr;
    ptr = fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d\n", &a, &b, &c);
    printf("The values of a, b, c are : %d %d %d\n", a, b, c);
    return 0;

}