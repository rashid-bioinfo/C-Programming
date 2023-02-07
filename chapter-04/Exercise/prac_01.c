/*
Q#1: Write a program to print multiplication table of a given number.
*/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Please enter a number for multiplication table: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", i,n,(i*n));
    }

    // ---
    return 0;
}