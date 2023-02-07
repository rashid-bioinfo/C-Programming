#include <stdio.h>
#include <math.h>

int main() {
    double number, square_root;
    printf("Enter a number: ");
    scanf("%lf", &number);
    square_root = sqrt(number);
    printf("Square root of %lf is %lf", number, square_root);
    return 0;
}
