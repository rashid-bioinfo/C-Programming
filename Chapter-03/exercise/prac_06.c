/*
Write a program to find greatest of four number enter by the user
*/

#include<stdio.h>

int main(){

    int num1, num2, num3, num4 = 0;
    int greatest_num_1 = 0;
    int greatest_num_2 = 0;

    printf("***--- Function to calculate greatest of four numbers ---***\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    printf("Enter fourth number: ");
    scanf("%d", &num4);

    printf("----------\n");
    if (num1 > num2){
        greatest_num_1 = num1;
    }
    else {
        greatest_num_1 = num2;
    }
    if (num3 > num4){
        greatest_num_2 = num3;
    }
    else {
        greatest_num_2 = num4;
    }
    if (greatest_num_1 > greatest_num_2){
        printf ("The greatest number is: %d\n", greatest_num_1);
    }
    else{
        printf ("The greatest number is: %d\n", greatest_num_2);

    }
    

    // ---
    return 0;
}