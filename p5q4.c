//Fibonacci using Recursion

#include<stdio.h>
int fibo(int n);

int main(){
    int fn = fibo(6);
    printf("%d", fn);
    return 0;
}

int fibo(int n){
    //int a = 0;
    //int b = 1;
    if (n == 2)
        return 1;
    else if (n == 1){
        return 0;
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }


}