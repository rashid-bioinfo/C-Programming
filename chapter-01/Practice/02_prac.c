// Calculate the area of a circle and modify the same program to calculare the volume of a cylinder given its radius and height

#include<stdio.h>

int main(){
    
    // Calculate the area of circle
    float pi = 3.14;
    float r,h = 0;
    float area_of_circle, area_of_cylinder = 0;
    printf("Enter radius of circle/cylinder:\t");
    scanf("%f", &r);
    area_of_circle = pi * (r*r);
    printf("Area of circle is: %f\n", area_of_circle);

    // Calculate the area of cylinder
    printf("Enter height of cylinder:\t");
    scanf("%f", &h);
    area_of_cylinder = (2 * pi * r * h) + (2 * area_of_circle);
    printf("Area of cylinder is: %f\n", area_of_cylinder);


    return 0;
}
