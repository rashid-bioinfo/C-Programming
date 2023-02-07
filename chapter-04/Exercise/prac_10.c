/*
Q#4.10: Write a program to check whether a given number is a prime or not using loops 
*/

#include<stdio.h>

int main()
{
    int prime = 0;
    int n =0;
    printf("Please enter a number to print prime number till the entered number: ");
    scanf("%d", &n);

    for(int i=2; i <= n; i++)
    {
        prime = 1;
        printf("##%d\n", prime);

        for(int j=2; j < i; j++)
        {
            // printf("%d/%d = %d\n", i,j,(i%j));
            if (i%j == 0)
             {
                prime = 0;
                printf("%d/%d = %d\n", i,j,(i%j));
                break;
             }
            else
            {
                printf("@@%d/%d = %d\n", i,j,(i%j));
                // printf("%d\t", i);
                // break;

            }
        } 
         printf("&&%d\n", prime);
        printf("--------\n") ;
        if (prime == 1)
        {
            printf(":::%d\n", i);  
        }
         printf("==========\n") ;
    }
    
    // ---
    printf("\n");
    return 0;
}
