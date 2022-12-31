//SLICE the string

#include<stdio.h>
#include<string.h>

void slice(char *a, int m, int n);
int main(){
    char str[] = "SUYASH";
    int m = 3, n = 6;
    slice(str, m, n);
    printf("%s", str);

    return 0;
}

void slice(char *a, int m, int n){
    int i = 0;
    while((m+i)<n){
        a[i] = a[i+m];
        i++;
    }

    a[i] = '\0';
}
