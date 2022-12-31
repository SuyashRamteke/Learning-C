// Program to tell if a student has PASSED or FAILED
#include<stdio.h>

int result();

int main(){
    result();
    return 0;
}

int result(){
    int a, b, c;
    printf("Enter the marks in the first subject : \n");
    scanf("%d", &a);
    printf("Enter the marks in the second subject : \n");
    scanf("%d", &b);    
    printf("Enter the marks in the third subject : \n");    
    scanf("%d", &c);

    float avg = (a+b+c)/3;
    printf("The aggregate score is : %f \n", avg);
    if(avg >= 40 && a>=33 && b>=33 && c>=33)
    {
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}