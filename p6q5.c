// Pointer to pointer type variable

#include<stdio.h>

int main(){

    int x = 47;
    int *ptr;
    int **ptr2ptr;

    ptr = &x;
    ptr2ptr = &ptr;

    printf("The value of i is : %d", **ptr2ptr);
    return 0;
}

// Double deference operator

