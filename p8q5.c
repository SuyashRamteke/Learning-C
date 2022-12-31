// Encryption/Decryption using caesar cipher
#include<stdio.h>

void encrypt(char *str2);
void decrypt(char *str2);
int main(){
    char str[] = "SLASH DOT STAR";
    printf("The original string is : %s\n", str);
    
    encrypt(&str);
    printf("The encrypted string is : %s\n", str);

    decrypt(str);
    printf("The decrypted string is : %s\n", str);



    return 0;
}

void encrypt(char *str2){
   
    //char encrpyted_str[len];
    char *ptr = str2;
    while(*ptr != 0){
        // This is very important to understand. We add 1 to *ptr means the it will increase the ASCII value of the character//
        // ptr++ means it will move to the next memory location of the string!
        *ptr = *ptr + 1;
        ptr++;
    }
    
}

void decrypt(char *str2){
    
    //character pointer variable points to the first location of str2

    char *ptr = str2;
    while(*ptr != 0){
        // We subtract 1 from *ptr means the it will decrease the ASCII value of the character//
        // ptr++ means it will move to the next memory location of the string!
        *ptr = *ptr - 1;
        ptr++;
    }
    
}