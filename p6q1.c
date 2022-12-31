//Program to print the address of the variable

#include<stdio.h>

int main(){
    
    int i = 7;
    int *j;
    j = &i;

    printf("Address of the variable is : %u\n", j);
    printf("Value of the variable is : %d\n", *j);

    return 0;

}

/* The output I get is correct. however I get a warning. It says that, format specifier for j, the pointer variable is unsigned int 
    whereas the argument has type int*. How to fix this error?
*/