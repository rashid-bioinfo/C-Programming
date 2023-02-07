/*
Q#4.5: Write a program to sum first ten natural numbers using while loop
*/

#include<stdio.h>

int main (){
    int i = 0;
    int n = 0;

    while (i <= 20){
        n = n + i;
        i += 1;
    }
    printf("The sum of first 10 natural numbers is: %d\n", n);
    // ---
    return 0;
}