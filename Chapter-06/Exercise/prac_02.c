/*
Q#6.02: Write a program having a variable i. Print the address of i. Pass the variable to a function and print its adrress. Are address same? Why
*/

#include<stdio.h>
int func(int*);

int main(){

    int i = 4;
    printf("The address of variable i is: %u\n", &i);
    printf("The address of variable i is: %u\n", func(&i));
    func(&i);

    return 0;
} 

int func(int *ptr){
    // printf("The address of variable is: %u\n", var);
    return ptr; 
}