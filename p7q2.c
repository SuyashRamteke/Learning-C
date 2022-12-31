// Multiplication table of 5 in an array
#include<stdio.h>

int main(){
    
    int a[10];
    int i;
    for(i=0; i<10; i++){
        a[i] = (i+1) * 5; 
    }
    for(int j = 0; j<10; j++){
        printf("The array is : %d\n", a[j]);
    }
    return 0;
}

