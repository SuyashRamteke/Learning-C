#include<stdio.h>

int main(){
    
    int a[10];
    int i, k;

    printf("Enter the number : \n");
    scanf("%d", &k);

    for(i=0; i<10; i++){
        a[i] = (i+1) * k; 
    }
    for(int j = 0; j<10; j++){
        printf("%d X %d = %d\n", k, (j+1), a[j]);
    }
    return 0;
}
