/* Quiz: Write a program to find grade of a student given his marks based on below:
    A: 100 - 90
    B: 80 - 90
    C: 70 - 80
    D: 60 - 70
    */

#include<stdio.h>


int main(){
    int marks = 0;
    printf("Please enter marks of the student to determine his grade: ");
    scanf("%d", &marks);

    // Scenario 1: Solution with if-else if - else statement
    if (marks >= 90){
        printf("Your Grade is: A \n");
    }
    else if (marks >= 80 && marks <= 90){
        printf("Your Grade is: B \n");
    }
    else if (marks >= 70 && marks <= 80){
        printf("Your Grade is: C \n");
    }
    else if (marks >= 60 && marks <= 70){
        printf("Your Grade is: D \n");
    }
    else {
        printf("Sorry, you have not qualify the course, please try again \n");
    }

return 0;
}