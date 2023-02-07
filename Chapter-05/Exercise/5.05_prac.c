/*
Q#5.05: What will the following line produce in a C program:
printf("%d%d%d\n", a, ++a, a++)
*/
#include<stdio.h>

int main(){

    int a = 4;
    printf("%d\t%d\t%d\n", a, ++a, a++);
    // printf("a: %d\n", a);
    // printf("++a: %d\n", ++a);
    // printf("a++: %d\n", a++);
    
    return 0;
}