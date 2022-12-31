//Reverse the array
#include<stdio.h>

void reverse(int *x);

int main(){
    
    int p[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j;
    printf("Original array : \n");
    for(i=0; i<10; i++){
        printf(" %d", p[i]);
    }

    reverse(&p);
    printf("\nReversed Array : \n");

    for(j=0; j<10; j++){
        printf(" %d", p[j]);
    }

    return 0;
}

void reverse(int *x){

    int k;
    for(k=0; k<=5; k++){
        int temp;

        temp = x[k];
        x[k] = x[10-k-1];
        x[10-k-1] = temp;
    }

}