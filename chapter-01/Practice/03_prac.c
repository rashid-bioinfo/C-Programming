// Write a program to convert celsius (Centigrade degrees temperate to Farenheit)

#include<stdio.h>

int main(){
    // Taking input from user
    float temp_celsius = 0;
    float celcius_to_Fareheit = 0;
    printf("Please enter the temperature in Celsius: \t");
    scanf("%f", &temp_celsius);

    celcius_to_Fareheit = (temp_celsius * 9/5) + 32;
    printf("The temperature in Farenheit is: %f\n", celcius_to_Fareheit) ;
    

    return 0;
}
