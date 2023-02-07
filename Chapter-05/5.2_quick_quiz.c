/*
Quick Quiz: Write a program with three functions:
1. Good morning function which prints "Good morning"
1. Good afternoon function which prints "Good afternoon"
1. Good night function which prints "Good night"
*/

#include<stdio.h>

// functions prototypes
void good_morning();
void good_afternoon();
void good_night();

int main(){

    // functions calling
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}

// functions definition

void good_morning(){
    printf("Good morning!\n");
}
void good_afternoon(){
    printf("Good afternoon!\n");
}
void good_night(){
    printf("Good night!\n");
}