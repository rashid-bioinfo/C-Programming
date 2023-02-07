/*
Q#5.04: Write a program using recursion to calculate nth element of fibnocci series.

Hint: fibnocci series: 1 1 2 3 5 8 13 21 ...
*/
#include<stdio.h>

int fib(int);

int main(){

    int n = 8;

    printf("The element %d of fibnocci series is %d\n", n, fib(n));    
    return 0;
}

int fib(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
