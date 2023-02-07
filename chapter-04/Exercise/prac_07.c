/*
Q#4.7: Write a program to calculate the sume of the numbers occuring in the multiplication table of 8 
*/
#include<stdio.h>


int main(){
    int sum = 0, prod = 0, n = 0;

    printf("Please enter a number for multiplication table: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        prod = i * n;
        printf("%d x %d = %d\n", i,n,prod);
        sum = sum + prod;
        
    }
    printf("The sum of the number occuring in the table of %d: %d\n", n, sum);

    // ---
    return 0;
}