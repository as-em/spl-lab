// 4. Write a C program to verify whether the given year is a leap year or not?

#include <stdio.h>
int main (){
    int year;
    printf("Enter year : \n");
    scanf("%d", &year);
    if( year%400==0 || (year%4==0 && year!=100)){
        printf("Leap year.");
    }
    else {
        printf("Not a leap year.");
    }
    return 0;
}
