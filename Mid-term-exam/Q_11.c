// 11. Write a C program to find all possible roots of a quadratic equation 

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2, d;

read:
    printf("Enter value of a: ");
    scanf("%d", &a);
    if (a == 0)
        goto read;

    printf("Enter value of b and c: ");
    scanf("%d%d", &b, &c);

    d = (b * b) - (4 * a * c);

    if (d == 0){ // test case 2 , 4,2
        x1 = -b / (2 * a);
        printf("unique solution x= %.3f", x1);
    }
    else if (d > 0){ // test case 1 , 4,2
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.3f\nx2 = %.3f", x1, x2);
    }
    else{ // test case 3 , 4,2
        d *= (-1);
        float m = -b / (2 * a), n = sqrt(d) / (2 * a);
        printf("imaginary solution\n");
        printf("x1 = %.2f + i%.3f\nx2 = %.3f - i%.3f", m, n, m, n);  // Here i means complex number
    }
    return 0;
}
