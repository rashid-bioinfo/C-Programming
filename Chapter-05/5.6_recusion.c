/*
Write a function to calculate factorial of a number using recursive funtion
*/
#include<stdio.h>

int factorial (int x){
    int f;
    if (x == 0 || x == 1){
        return 1;
    }
    else{
        f = x*factorial(x-1);
    }
}
int main(){

    int n = 5;

    printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}