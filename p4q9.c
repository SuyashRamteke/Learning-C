// Prime Number
#include<stdio.h>

int main(){
    
    int fact = 1, n;
    printf("Enter the number :\n");
    scanf("%d", &n);

    int i;

    for(i=2; i<n/2; i++){
        if (n%i==0){
            fact++;
        }
    }
    if(fact == 1 && n!=2 && n!=3 && n!=4){
        printf("PRIME!");
    }
    else{
        printf("Not a Prime!");
    }

    return 0;
}