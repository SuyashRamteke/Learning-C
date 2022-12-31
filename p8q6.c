// Program to count the occurrence of a given character in the string

#include<stdio.h>

int character_count(char str[], char ch);

int main(){
    char str[] = "SLOW DANCING IN A BURNING ROOM, JOHN MAYER!";
    char ch;
    //char ch = 'O';
    int c;
    printf("Enter the character : \n");
    scanf("%c", &ch);

    c = character_count(str, ch);
    printf("The number of occurences of '%c' in the String is : %d", ch, c);

    return 0;
}

int character_count(char str[], char ch){
    int count = 0;
    char *ptr = str;
    while(*ptr != '\0'){
        if(*ptr == ch)
            count++;
        ptr++;
    }
    return count;
}