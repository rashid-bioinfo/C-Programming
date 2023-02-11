 /*
 Q#6.01: Write a program to print the address of a variable. Use this address to get the value of this variable.
 */

#include<stdio.h>

int main(){
    int i = 8;
    printf("The address of variable i is %u\n", &i);
    printf("The value of variable i is %d\n", *(&i));


    return 0;
}