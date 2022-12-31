// Program to copy a string using strcpy and user defined function //

#include<stdio.h>
#include<string.h>

int main(){

    char str[]="MANCHESTER UNITED";
    char str_copy1[20];
    strcpy(str_copy1, str);

    printf("The original string is : %s\n", str);
    printf("The copied string using library function is : %s\n", str_copy1);

    char str_copy2[20];
    int i;
    for(i=0; i<strlen(str); i++){
        str_copy2[i] = str[i];
    }
    str_copy2[i] = '\0';
    printf("The copied string using user defined function is : %s", str_copy2);
    return 0;
}

