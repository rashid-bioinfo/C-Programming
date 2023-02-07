/*
Q#4.9: Repeat program 8 using while loop
*/

#include<stdio.h>

int main(){
    int i = 0, n = 0;
    int fact = 1;
    printf("Please enter a number to calculate its factorial: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1){
        fact = fact * i;
        i -= 1;
    }
    printf("Factorial of %d: %d\n", n, fact);
    return 0;
}