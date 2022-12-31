//3D array
#include<stdio.h>

int main(){

    int a[2][2][2];
    int i, j, k;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &a[i][j][k]);
            }
        }
    }
    return 0;
}

// In memory, the 2D, 3D, nD array is linearly placed in memory!!