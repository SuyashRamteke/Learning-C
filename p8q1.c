//Strings
//gets() is used to input a multi-word string

#include<stdio.h>
int main(){
    
    char c[20];
    char d[20];
    char ch; 
    int i = 0;

    printf("Enter the string : \n");
    scanf("%s", &c);
    
    scanf("%c", &ch);

    while(ch!="\n"){
        fflush(stdin);
        scanf("%c", &ch);
        d[i] = ch;
        i++;
    }
    d[i] = '\0';

    printf("String 1 : %s", c);
    printf("String 2 : %c", d);

    return 0;

}