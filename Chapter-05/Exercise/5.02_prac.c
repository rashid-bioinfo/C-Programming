/*
Q#5.02: Write a function to convert celcius temperate into farenheit.
hint: (32°C × 9/5) + 32 = 89.6°F
*/

#include<stdio.h>
double celciusToFarenheit(int);

int main(){

    int val;
    printf("Enter temp in C to convert into F: ");
    scanf("%d", &val);
    printf("%d C = %0.2f F\n", val, celciusToFarenheit(val));
    return 0;
}

double celciusToFarenheit(int val){
    return (val * 9/5.0) + 32;
}
