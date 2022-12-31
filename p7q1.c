// Pointer arithmetic in Arrays

#include<stdio.h>

int main(){

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr2 = &a;
    int *ptr = a;
    printf("Address of the first element of array in memory : %u\n", ptr);
    printf("Address of the third element of array in memory : %u\n", ptr+2);
    printf("Value at the first element : %d\n", *ptr);
    printf("Value at the third element : %d\n", *(ptr+2));

    printf("Address of the first element of array in memory : %u\n", ptr2);
    
    return 0;
}

// Since a is an array, a and &a gives the address of the first element of the array. This is very important!!
/* If S[3] is a 1-D array of 10 integers, *(S+3) refers to the 3rd element --> FALSE
*/

