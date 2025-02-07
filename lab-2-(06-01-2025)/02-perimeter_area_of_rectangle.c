#include <stdio.h>

int main(){

    float l, w, perimeter, area;

    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);

    perimeter = 2 * (l + w);
    area = l * w;

    printf("The area of rectangle is : %.2f and perimeter is : %.2f", area, perimeter);

    return 0;
}
