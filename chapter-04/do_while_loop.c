/*
do while loop
Quiz: Write a program to print first n natural numbers using do while loop
*/

#include<stdio.h>

int main(){

    int n = 0;
    int i = 1;
    printf("Please enter n to print natural number: ");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        // n -= 1;
        i += 1;
    } while (i <= n);

    return 0;
}