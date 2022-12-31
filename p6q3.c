// Change the value of a variable

#include<stdio.h>

int magnify(int *j);

int main(){
    int i = 1;
    printf("The value of the variable is : %d\n", i);
    i = magnify(&i);
    printf("The value of the variable is : %d\n", i);
    return 0;

}

int magnify(int *j){
    *j = (*j) * 10;
    return *j;
}

/*  The argument is a pointer variable. This means that by default, is designed to store the address of the variable. So we 
    pass the address of i in magnify, modify it's value to 10 times it's current value and return it.
    */