/*
Q#2: Write a program to print multiplication of 10 in reverse order
*/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Please enter a number for multiplication table: ");
    scanf("%d", &n);

    for(int i=10; i>=1; i--){
        printf("%d x %d = %d\n", i,n,(i*n));
    }

    // ---
    return 0;
}