/*
Q#4.6: Write a program to implement program 5 using for and do-while loop
*/

#include<stdio.h>

int main (){

    
    int n = 0;
    /*
    // Implementation of program using for loop
    for (int i=0; i<=20; i++){
        n = n + i;
    }
    */
   
    //  Impemtnation of program using do-while loop
    int i = 0;

    do {
        n = n + i;
        i += 1;
    } while (i<=20);


    printf("The sum of first 10 natural numbers is: %d\n", n);
    // ---
    return 0;
}