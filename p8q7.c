// Program to check if a character is present in a string or not

#include<stdio.h>

int character_present(char str[], char ch);

int main(){
    char str[] = "BEAST AND THE HARLOT, AVENGED SEVENFOLD!";
    char ch;
    //char ch = 'O';
    int c;
    printf("Enter the character : \n");
    scanf("%c", &ch);

    c = character_present(str, ch);
    if (c==1){
        printf("YES!");
    }
    else{
        printf("NO");
    }

    return 0;
}

int character_present(char str[], char ch){
    int flag = 0;
    char *ptr = str;
    while(*ptr != '\0'){
        if(*ptr == ch)
            flag++;
        
        if (flag == 1)
            break; 
        ptr++;
    }
    return flag;
}