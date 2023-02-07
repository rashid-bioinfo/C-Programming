/*
Quiz: Write a program to print n natural number in reverse order
*/

#include<stdio.h>

int main(){
    int n = 0;
    // int i = 0;

    printf("Please enter n natural number: ");
    scanf("%d", &n);

    while(n >= 1){
        printf("%d\n", n);
        n -= 1;
    }

    return 0;
}