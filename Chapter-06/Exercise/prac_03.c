/*
Q#6.03: Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference. 
*/

#include<stdio.h>
int func (int *);

int main(){

    int i = 3;
    printf("The value of i after ten time increment: %d\n", func(&i));
    return 0;
}

int func (int *ptr){
    return *ptr * 10;
}