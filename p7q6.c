//2-D array to store tables

#include<stdio.h>

int main(){

    int a[3][10], p[3] = {2,7,9};
    int i, j;
    for(i=0; i<3; i++){
        a[i][0] = p[i];
        for(j=1; j<10; j++){
            a[i][j] =  p[i]*(j+1);
        }
    }
    int k,l;
    for(k=0; k<3; k++){
        printf("Table of %d : \n", p[k]);
        for(l=0; l<10; l++){
            printf("%d ", a[k][l]); 
        }
        printf("\n");
    }

    return 0;
}