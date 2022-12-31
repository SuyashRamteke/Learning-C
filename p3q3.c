// Program to calculate the income tax

#include <stdio.h>

int income_tax_calc();

int main(){
    income_tax_calc();
    return 0;
}

int income_tax_calc(){
    printf("Enter the income : \n");
    float salary, tax;
    scanf("%f", &salary);
    if(salary <= 250000){
        tax = 0;
    }
    else if(salary >= 250000 && salary<= 500000)
    {
        tax = 0.05 * salary;
    }
    else if(salary >= 500000 && salary<= 1000000)
    {
        tax = 0.2 * salary;
    }
    else{
        tax = 0.3 * salary;
    }

    printf("The calculated income tax is : %.2f\n", tax);


    return 0;
}