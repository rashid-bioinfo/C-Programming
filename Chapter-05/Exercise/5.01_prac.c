/*
Write a program using function to find average of 3 numbers
*/

#include<stdio.h>

double average(int, int, int);

int main(){
    printf("The average of three numbers is %0.2f\n", average(1,4,3));

    return 0;
}

double average(int a, int b, int c){
    return (a + b + c)/3.0;
}