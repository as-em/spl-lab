// 4. Write a C program to swap two numbers using a third variable.

#include<stdio.h>

int main(){

    int a,b,c;
    printf("two num :");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("a=%d \n b=%d",a,b);
    return 0;
}
