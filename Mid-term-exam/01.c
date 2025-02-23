// 1. Write a C program to find the area and perimeter of a triangle

#include <stdio.h>
#include <math.h>

int main() {

    float a , b ,c ;
    float perimeter, half_perimeter , area;

    printf("Please input 3 are of triangle :");
    scanf("%f %f %f",&a ,&b ,&c);

    perimeter = a + b + c;
    printf("Perimeter of triangle: %.2f \n",perimeter);

    half_perimeter = perimeter / 2;

    area = sqrt(half_perimeter * (half_perimeter - a) * (half_perimeter - b) * (half_perimeter - c ) );
    printf("Area of triangle: %.2f \n",area);


    return 0;
}
