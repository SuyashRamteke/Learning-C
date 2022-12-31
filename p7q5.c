// Counting number of positive integers in an array

#include<stdio.h>

int main(){
    int arr[11] = {-1, 1, 2, -3, -4, 5, 6, 7, -8, 9, 10};

    int i, count = 0;
    for(i=0; i<11; i++){
        if(arr[i]>0){
            count++;
        }
    }
    printf("The number of positive integers in the array is : %d", count);
}