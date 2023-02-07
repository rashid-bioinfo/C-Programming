/*
for loop
Quiz: Write a program to print first n natural numbers using for loop
*/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Please enter n natural numbers: ");
    scanf("%d", &n);

    for (int i=1; i <= n; i++){
        printf("%i\n", i);
    }

    return 0;
}