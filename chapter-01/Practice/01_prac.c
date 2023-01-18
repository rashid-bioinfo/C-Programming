/* Write a program to calculate area of a rectangle:
    a) Using hard coded inputs
    b) Using inputs supplied by the user
*/

#include<stdio.h>

int main(){
    
    // Variable Initialization 
    // a) hard coded input
    int width = 10;
    int height = 5;
    int area = 0;
    area = width * height;

    // b) area provided by user 
    int w, h, a = 0;

    printf("Enter width of rectangle: \t");
    scanf("%d", &w);
    printf("Enter height of rectangle: \t");
    scanf("%d", &h);

    // area = width * height
    a = w * h;

    printf("Hard coded input: The area of rectangle is: %d\n", area);
    printf("Define by the User: The area of rectangle is: %d\n", a);

    return 0;
}