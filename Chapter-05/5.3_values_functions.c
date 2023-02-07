/*
Passing values to a function
*/

#include<stdio.h>

// function prototype
int sum(int a, int b);

int main(){
    int results = 0;
    
    results = sum(7,8);
    
    printf("Sum of two variables is: %d\n", results);
    
    return 0;
}

int sum (int a, int b){
    int c;
    c = a + b;
    return c;
}