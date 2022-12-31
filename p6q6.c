// Call by value

#include<stdio.h>

int magnify(int b);

int main(){
    int a = 10;
    int c = magnify(a);

    printf("The value of the new int is : %d", c);
    printf("The value of the old int is : %d", a);
        
    return 0;
}

int magnify(int b){
    
    b = b*10;
    return b;
}

