/*
Write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. 
Assume 3 subjects and take marks as an input from the user
*/

#include<stdio.h>

int main(){
    float bio = 0;
    float phy = 0;
    float che = 0;
    float total_marks = 300;
    float obtained_marks = 0;
    printf("Please enter marks of bio: ");
    scanf("%f", &bio);
    printf("Please enter marks of phy: ");
    scanf("%f", &phy);
    printf("Please enter marks of che: ");
    scanf("%f", &che);

    printf ("----------\n");
    printf("You have entered marks of bio: %0.0f\n", bio);
    printf("You have entered marks of phy: %0.0f\n", phy);
    printf("You have entered marks of che: %0.0f\n", che);
    obtained_marks = ((bio + phy + che)/total_marks) * 100;
    printf("Total obtained marks: %0.0f%%\n", obtained_marks);
    printf ("----------\n");

    if (obtained_marks > 40){
        bio > 33? printf("You are passed in bio\n"): printf("You are failed in bio\n");
        phy > 33? printf("You are passed in phy\n"): printf("You are failed in phy\n");
        che > 33? printf("You are passed in che\n"): printf("You are failed in che\n");
        bio > 33 && phy > 33 && che > 33? printf("You have qualified the exam.\n"): printf("You have not quailified the exam, Pleae try again!\n");
        // obtained_marks > 40? printf("You have qualified the exam\n"): printf("You have not qualified the exam as your obtained markes are less than 40%%\n");
    }
    else{
        printf("You are failed. Your aggregate obtained marks are less than 40%%\n");
    }
    
    // -----
    return 0;
}