/*
Q5.03: Write a function to calculate force of attraction on a body of mass, m exerted by earth.
g = 9.8 m/s^2
F = m * g
*/

#include<stdio.h>

float force_of_attraction(float); // function prototype


int main(){

    float mass;
    printf("Please enter mass of a body: ");
    scanf("%f", &mass);
    printf("The force of attraction of a body having %0.2f mass is: %0.2f\n", mass, force_of_attraction(mass));
    return 0;
}

float force_of_attraction(float m){
    return m * 9.8;
}