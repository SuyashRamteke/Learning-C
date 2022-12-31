#include <stdio.h>
#include <stdlib.h>

int calc_area_1();
int calc_area_2();

int main(){
    // int area_1 = calc_area_1();
    // printf("Area of rectangle with hard-coded inputs : %d\n", area_1);
    
    int area_2 = calc_area_2();
    printf("Area of rectangle with user inputs : %d\n", area_2);
    
    return 0;
}

// int calc_area_1(){
//     int length = 16, breadth = 12;
//     int area_1 = length * breadth; 
//     return area_1;
// }

int calc_area_2(){
    int length, breadth;
    printf("Enter the length : \n");
    scanf("%d", &length);
    printf("Enter the breadth : \n");
    scanf("%d", &breadth);
    int area_2 = length * breadth;
    return area_2;
}