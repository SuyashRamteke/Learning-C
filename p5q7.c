//Pattern

#include<stdio.h>

int pattern(int n);

int main(){
    pattern(7);
    return 0;
}

int pattern(int n){
    
    int i;
    for(i=1; i<=n; i++){
    if(i%2 == 0){
        printf("\n");
    }
    else{
        int j = 0;
        for (j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;

}