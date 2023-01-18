/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:

income-slab                   tax
--------------             -----------
below 2.5L                      no tax
2.5L - 5.0L                     5%
5.0L - 10.0L                    20%
above 10.0L                     30%

*/
#include<stdio.h>

int main(){
    
    float income = 0; 
    float taxable_income = 0;
    float tax_applied = 0;
    

    printf("Please enter your income: ");
    scanf("%f", &income);

    printf("Your income is: %0.0f\n", income);

    printf("-----------------\n");
    // income: below 250,000 
    if (income < 250000){
        printf("Your income is below 250,000, Hence 0%% tax deduction will be applied\n");
    }
    
    /* ---------------------------
        income: 250,000 to 500,000
    */
    
    if (income > 250000 && income < 500000){
        printf("Your income is between 250,000 and 500,000, Hence 5%% tax deduction will be applied\n");
       
        taxable_income = income - 250000;
        printf("Taxable income is: %0.0f\n", taxable_income);
        tax_applied = taxable_income * 0.05;     
    }
    
    /* ---------------------------
        income: 500,000 to 1,000,000
    */
    
    if (income > 500000 && income < 1000000){
        printf("Your income is between 500,000 and 1,000,000, Hence 20%% tax deduction will be applied\n");
    
        taxable_income = income - 500000;

        tax_applied = (taxable_income * 0.2) + (income - taxable_income -250000)*0.05 ;        

    }

    /* ---------------------------
        income: above 1,000,000
    */
    
    if (income > 1000000){
        printf("Your income is greater than 1,000,000, Hence 30%% tax deduction will be applied\n");

        taxable_income = income - 1000000;

        tax_applied = (taxable_income * 0.3) + (income -taxable_income - 500000)*0.2 + (income - taxable_income - 500000 - 250000)*0.05;

    }
    
    printf("\n _____________****___________\n\n");
    printf("Tax applied in your income: %0.0f\n", tax_applied);
    printf("Income before tax: %0.0f\n", income);
    printf("Income after tax: %0.0f\n", (income - tax_applied));
    
    printf("-----------------\n");

    //  ---
    return 0;
}

