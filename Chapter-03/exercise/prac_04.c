/*
Q#4: Write a program to find whether a year entered by the user is a leap year or not. Take year an an input from the user
*/

#include<stdio.h>

int main(){

    int year = 0;

    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &year);

    printf("----------\n");
    printf("The entered year is: %d\n", year);

    if (year%4 != 0){
        printf("It is a common year \n");
    }
    else if (year%100 != 0){
        printf("It is a leap year \n");
    }
    else if (year%400 != 0){
        printf("It is a common year \n");
    }
    else{
        printf("it is a leap year\n");
    }


    // ---
    return 0;
}