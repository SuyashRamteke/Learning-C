// Program to modify the value to double the original
#include<stdio.h>

int main(){
    
    int num;
    FILE *ptr1, *ptr2;
    ptr1 = fopen("integer.txt", "r");
    fscanf(ptr1, "%d", &num);

    num *= 2;
    ptr2 = fopen("integer.txt", "w");
    fprintf(ptr2, "%d\n", num);

    fclose(ptr1);
    fclose(ptr2);
    return 0;

}