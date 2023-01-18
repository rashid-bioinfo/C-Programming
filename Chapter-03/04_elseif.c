#include<stdio.h>

int main(){

    int age = 0;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age > 18){
        printf("you are eligible to drive\n");
    }
    else if (age < 18) {
        printf("You are not eligible to drive\n");
    }
    else{
        printf("You have just reached 18, you'd better apply for driving liscence before driving\n");
    }
    
    return 0;
}