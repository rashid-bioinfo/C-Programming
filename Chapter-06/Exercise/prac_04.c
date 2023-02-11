/*
Q#6.04: Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the value of 
sum and average in main()
*/
#include<stdio.h>
int average(int*, int*);
int sum(int*, int*);

int main(){
    int a = 20;
    int b = 6;

    printf("The average of a and b is: %d\n", average(&a, &b));
    printf("The sum of a and b is: %d\n", sum(&a, &b));
    return 0;
}

int average(int *aptr, int *bptr){
    return (*aptr + *bptr) / 2;
}

int sum(int *aptr, int *bptr){
    return *aptr + *bptr;
}
