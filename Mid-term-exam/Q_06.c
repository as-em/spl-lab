// 6. Write a C program to find a triangle is equilateral, isosceles or scalene.

#include<stdio.h>

int main(){

    int a,b,c;
    printf("three number :");
    scanf("%d%d%d",&a,&b,&c);

    if((a==b) && (b==c)){
        printf("equilateral");
    }
    else if((a==b && a!=c) || (b==c && a!=b) || (a==c && b!=c) ){
        printf("isosceles");
    }
    else{
        printf("scalene");
    }

    return 0;
}
