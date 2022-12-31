// 1) Find whether the given expressions are valid or not
/*
    a) int a; b = a;
    Invalid : The variable b has not been declared

    b) int v = 3^3;
    Valid : This expression is actually bitwise operator

    c) char dt = "21 Dec 2020"
    Invalid : A char can hold only single character

2) What datatype will 3.0/8 - 2 return?
    It will return a double. By default all the decimal point numbers in C are treated as doubles

3) Program to check if the number is divisible by 97

*/

#include <stdio.h>

int main(){

    int n;
    printf("Enter the number to be checked : \n");
    scanf("%d", &n);
    int rem = n%97;

    printf("%d\n", rem);

    return 0;

}

/*
4) x = 2, y = 3, z = 3, k = 1

    3*x / y - z + k
    Since the operator precedence of *, / and % is higher than +, - and =
    We can say this will evaluate as follows:

    3 * 2 / 3 - 3 + 1
    6 / 3 - 3 + 1
    2 - 3 + 1
    -1 + 1
    0

5) 3.0 + 1 will be
    4.0, float
*/