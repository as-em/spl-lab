// 15. Write a C program to count the number of digits in a given number. 

#include <stdio.h>

int main(){

    int n , r = 0;

    printf("Enter a digit : ");
    scanf("%d", &n);

    for(int i=1; n != 0; i++){

        
        n%10;
        n = n/10;
        r++;

    }

    printf("Total digit: %d\n", r);
    return 0;
}
