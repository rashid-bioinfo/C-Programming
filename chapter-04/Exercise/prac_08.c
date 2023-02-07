/*
Q#4.8: Write a program to calculate the factorial of a given number using a for loop
*/

#include<stdio.h>

int main(){
    int n = 0;
    int fact = 1;
    printf("Please enter a number to calculate its factorial: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--){
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n", n, fact);


    return 0;
}