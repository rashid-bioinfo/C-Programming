// Write a program to check whether a number is divisble by 97 or not

#include<stdio.h>

int main() {
    int num, res = 0;
    printf("Please enter a number:  ");
    scanf("%d", &num);
    res = num % 97;
    if (res == 0){
        printf("Number is divisble by 97\n");
    }
    else {
        printf("Number is not divisibly by 97\n");
    }


    return 0;
}