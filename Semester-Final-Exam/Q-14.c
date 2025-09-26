//14. Write a C program to exchange the value of two variables (X,Y) using pointer.

#include <stdio.h>

int main() {
    int x, y, temp;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    p1 = &x;
    p2 = &y;

    printf("Before : x = %d, y = %d\n", x, y);

    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After :  x = %d, y = %d\n", x, y);

    return 0;
}
