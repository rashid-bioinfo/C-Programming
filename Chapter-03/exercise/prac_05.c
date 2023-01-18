/*
Q#5: Write a program to determine whether a character entered by the user in lowercase or not.
*/

#include<stdio.h>

int main(){

    char alphabet = 0;

    printf("Please enter an alphabet to check if it is in lowercase or uppercase: ");
    scanf("%c", &alphabet);

    printf("-------------\n");
    printf("You have entererd following character: %c\n", alphabet);

    // typecase char into int

    int ascii_alphabet = (int) alphabet;
    printf("ASCII value of %c is: %d\n", alphabet, ascii_alphabet);

    if (ascii_alphabet >= 97 && ascii_alphabet <=122){
        printf("%c is in lowercase\n", alphabet);
    }
    else{
        printf("%c is in uppercase\n", alphabet);

    }

    // if(alphabet)

    // ----
    return 0;
}