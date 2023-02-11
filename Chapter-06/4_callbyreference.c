/*
Chapter 06 - Pointers
Call b reference - instead of sending the values of the variables, we send the address of the variables
*/

#include<stdio.h>

int sum(int *, int *);

int main(){
    int x = 5;
    int y = 4;

    printf("The value of x + y is %d\n", sum(&x,&y));
    printf("The value of x and y is %d and %d\n", x, y);
    return 0;
}

int sum (int *a, int *b){
    *a = 56;
    return *a + *b;
} 