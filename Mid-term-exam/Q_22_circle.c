#include <stdio.h>
#define PI 3.14
int main()
{
    float r, area, circumference;
    printf("Enter radius:");
    scanf("%f", &r);
    circumference = 2 * PI * r;
    area = PI * r * r;
    printf("The area of circle is: %.2f and circumference is: %.2f", area, circumference);
    return 0;
}
