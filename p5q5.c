// Arguments are passed from right to left

#include<stdio.h>
int main(){
    int a = 5;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}

// Ideally the output should be 5 5 3
// I am getting the output 3 4 4