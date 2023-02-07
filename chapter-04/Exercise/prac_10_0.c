/*
Q#4.10: Write a program to check whether a given number is a prime or not using loops 
*/

#include<stdio.h>

int main()
{
    int prime = 0;
    int n = 0;
    printf("Please enter a number to check if it is prime number: ");
    scanf("%d", &n);

    for (int i=2; i <= n; i++)
    {
        prime = 1;
        if (n%i == 0 && n != i)
        {
            prime = 0;
            break;
        }

        prime = 1;
           
    }
    if (prime){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}