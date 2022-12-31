#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, p = 7;
    ptr = (int*)calloc(10, sizeof(int));

    for(int i=0; i<10; i++){
        ptr[i] = p*(i+1);
        printf("%d X %d = %d : \n", p, (i+1), ptr[i]);
    }

    ptr = (int*)realloc(ptr, 15 * sizeof(int));

    for(int i=0; i<15; i++){
        ptr[i] = p*(i+1);
        printf("%d X %d = %d\n", p, (i+1), ptr[i]);
    }
    
    return 0;
}