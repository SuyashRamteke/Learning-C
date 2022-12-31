/* Structures can store dissimilar datatypes!! 
   This is a custom data type. It is a collection of variables of different types under a single name */

   // Program to create a 2D Vector using structure

#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1, v2;
    v1.x = 25;
    v1.y = 20;

    v2.x = 12;
    v2.y = 16;

    printf("X-Y coordinate of vector v1 is : (%d, %d)\n", v1.x, v1.y);
    printf("X-Y coordinate of vector v2 is : (%d, %d)\n", v2.x, v2.y);
    
    return 0;
}
