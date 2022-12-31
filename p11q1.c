/* Dynamic Memory Allocation is a way to allocate memory to a data structure during runtime
    We can use DMA functions available in C to allocate and free memory in runtime 
    
    malloc : stands for memory allocation. It takes the number of bytes as an input returns
            the pointer of type void.

    calloc : stands for continuous allocation. It initializes each memory block with a default value 0

    free : It can be used to deallocate memory. The memory allocated using malloc/calloc is not 
            deallocated automatically! 
    
    realloc : It is used to reallocate memory of new size. It is used because sometimes the allocated
            memory is not sufficient

            Memory allocated from HEAP!
    */

// Program to create dynamically an array of size 6 capable of storing 6 integers

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr;
    //For calloc use calloc
    ptr = (int*)malloc(6*sizeof(int));

    for(int i=0; i<6; i++){
        printf("Enter the value of %d element : \n", i+1);
        scanf("%d", &ptr[i]);

    }
    for(int j=0; j<6; j++){
        printf("Enter the value of %d element : %d \n", j+1, ptr[j]);
    }

    return 0;
}
