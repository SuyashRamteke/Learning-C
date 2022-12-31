//Program to find out maximum out of 4 numbers
#include<stdio.h>

int main(){
    
    int a, b, c, d;
    printf("Enter the integer 1 : \n");
    scanf("%d", &a);
    printf("Enter the integer 2 : \n");
    scanf("%d", &b);    
    printf("Enter the integer 3 : \n");
    scanf("%d", &c);    
    printf("Enter the integer 4 : \n");
    scanf("%d", &d);

    int max;
    if(a>=b && a>=c && a>=d){
        max = a;
    }
    else if (b>=a && b>=c && b>=d){
        max = b;
    }
    else if(c>=a && c>=b && c>=d){
        max = c;
    }
    else {
        max = d;
    }

    printf("The maximum value is : %d\n", max);
    
    return 0;
}
