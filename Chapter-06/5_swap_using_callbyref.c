/*
Chapter 06 - Pointers
Swap function to swap values through call by reference
*/

#include<stdio.h>

void swap (int *, int *);


int main(){
    int x = 4;
    int y = 5;
 
    printf("*** Values of x and y before swaping ***\n");
    printf("x = %d, y = %d\n", x, y);
    
    printf("*** Values of x and y after swaping ***\n");
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    printf("temp: %d\n", temp);
    *x = *y;
    *y = temp;
}
