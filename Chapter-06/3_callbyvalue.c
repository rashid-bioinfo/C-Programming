/*
Chapter 06 - Pointers
Call b value
*/

#include<stdio.h>

int sum(int, int);

int main(){
    int x = 5;
    int y = 4;

    printf("The value of a + b is %d\n", sum(x,y));
    return 0;
}

int sum (int a, int b){
    a = 56;
    return a + b;
} 