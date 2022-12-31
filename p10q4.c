#include<stdio.h>

int main(){
    

    char name1[20];
    char name2[20];
    int sal1;
    int sal2;

    printf("Enter the name : \n");
    scanf("%s", name1);
    printf("Enter the salary : \n");
    scanf("%d", &sal1);
    printf("Enter the name : \n");
    scanf("%s", name2);
    printf("Enter the name : \n");
    scanf("%d", &sal2);

    FILE *ptr;
    ptr = fopen("Info.txt", "w");

    fprintf(ptr, "%s, %d\n",name1, sal1);

    fprintf(ptr, "%s, %d\n",name2, sal2);

    fclose(ptr);

    return 0;
        
}