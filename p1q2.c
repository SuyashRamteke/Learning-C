#include <stdio.h>
#include <stdlib.h>

float calc_vol();

int main(){
    // int area_1 = calc_area_1();
    // printf("Area of rectangle with hard-coded inputs : %d\n", area_1);
    
     float vol= calc_vol();
    printf("Volume of cylinder is : %f\n", vol);
    
    return 0;
}

// int calc_area_1(){
//     int length = 16, breadth = 12;
//     int area_1 = length * breadth; 
//     return area_1;
// }

float calc_vol(){
    int radius, height;
    printf("Enter the radius : \n");
    scanf("%d", &radius);
    printf("Enter the height : \n");
    scanf("%d", &height);
    float pi = 3.14;
    float area_2 = pi * radius * radius;
    printf("Area of cross section which is a circle : %f \n", area_2);
    float vol = area_2 * height;
    return vol;
}