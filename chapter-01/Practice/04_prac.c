// Write a program to calculate simple interest for a set of values representing principal, no. of years and rate of interest

#include<stdio.h>

int main(){
    // Taking input from user
    float compute_simple_interest = 0;
    float principal_amount, years, interst_rate = 0;

    printf("Please enter principal amount: \t");
    scanf("%f", &principal_amount);
    printf("Please enter annual interest rate: \t");
    scanf("%f", &interst_rate);
    printf("Please enter number of years: \t");
    scanf("%f", &years);

    compute_simple_interest = principal_amount * (1 + interst_rate/100 * years);
    printf("End Balance is: %f\n", compute_simple_interest);
    printf("Total interset is: %f\n", (compute_simple_interest - principal_amount));


    return 0;
}
