//SUM VECTOR

#include<stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2);

int main(){
    struct vector v1, v2, sum;
    v1.x = 25;
    v1.y = 20;

    v2.x = 12;
    v2.y = 16;

    printf("X-Y coordinate of vector v1 is : (%d, %d)\n", v1.x, v1.y);
    printf("X-Y coordinate of vector v2 is : (%d, %d)\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("X-Y coordinate of vector sum is : (%d, %d)\n", sum.x, sum.y);
    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;

}

/* If you want to store 20 intergers in memory, what should you use?
    Array or Structure?
    
    Array should be used. Since these are similar datatypes*/