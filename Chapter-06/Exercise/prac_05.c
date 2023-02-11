/*
Q#6.05: Write a program to print the value of a variable i by using "pointer to pointer" type of variable
*/

#include<stdio.h>

int main(){
    int i = 4;
    int *j;
    j = &i;
    int **k;
    k = &j;

    printf("The value of a variable i is: %u\n", **k);

    return 0;
}