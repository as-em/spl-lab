// 1. Write a C program to find area and circumference of a circle (use symbolic constant). 

#include <stdio.h>
#define PI 3.14
int main()
{
    float r, area, cirs;
    printf("Enter radius:");
    scanf("%f", &r);
    cirs = 2 * PI * r;
    area = PI * r * r;
    printf("The area of circle is: %.2f and circumference is: %.2f", area, cirs);
    return 0;
}
