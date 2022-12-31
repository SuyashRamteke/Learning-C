// Strlen function
#include<stdio.h>
#include<string.h>
int main(){
    
    char str[20];
    printf("Enter the string : \n");
    scanf("%s", str);

    int l1 = strlen(str), l2 = 0;
    int i = 0;
    while(str[i] != '\0'){
        l2++;
        i++;
    }
    printf("%d , %d ", l1, l2);

    return 0;

}