/*
Q#5.06: Write a recursive function to calculate the of first n natural numbers

Hint: The sum of first 10 natural numbers:
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55  
n(n + 1)/2
*/
#include<stdio.h>
int sum (int);


int main(){
    /*
    // Simple calculation
    int n = 10;
    int sum = 0;

    sum = n * (n + 1) / 2;

    printf("The sum of %d natural numbers is: %d\n", n, sum);
    */
    int n = 10;
    printf("The sum of %d natural number is: %d\n", n, sum(n));
    return 0;
}

int sum(int n){
    if (n == 1){
        return 1;
    }
    return sum(n-1) + n;

}
