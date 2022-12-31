//Program to check if it's a leap year

#include<stdio.h>

int leap_year();

int main(){
    leap_year();
    return 0;
}




int leap_year(){
    int year;
    printf("Enter the year to be checked : \n");
    scanf("%d", &year);

    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("LEAP YEAR!!");
    }
    else{
        printf("Not a Leap Year!!");
    }
    return 0;
}