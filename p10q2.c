//Generate Mltiplication table in a given format
#include<stdio.h>

int main(){
    
    int num;
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    printf("Enter the integer : \n");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i, num*i);
    }
    fclose(ptr);
    
    return 0;

}