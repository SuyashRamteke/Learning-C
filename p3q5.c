// Program to check lowercase
#include<stdio.h>
int main(){

    char ch;
    printf("Enter the character : \n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122)
    {
        printf("Lowercase!");
    }
    else{
        printf("Not lowercase!");
    }
    return 0;
}