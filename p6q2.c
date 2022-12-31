#include<stdio.h>

int ref(int j);

int main(){
    int i = 5;
    printf("The address of variable is : %u\n", &i);
    
    ref(i);

    return 0;
}

int ref(int j){
    printf("The address of the variable is : %u\n", &j);
    return 0;
}

// If we pass the variable itself, the corresponding addresses in the memory are NOT same!!
// However if we pass the address of the variable, then the addresses are same!!