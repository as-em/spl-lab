// 5. Write a C program to find if a triangle is a Right angled triangle or not.

#include<stdio.h>


int main(){

    int a,b,c;
    printf("three num :");
    scanf("%d%d%d",&a,&b,&c);

    if(c*c == ((a*a)+(b*b)) || b*b == ((a*a)+(c*c)) || a*a == ((c*c)+(b*b)) ){
        printf("right");
    }
    else{
        printf("not");
    }
    return 0;
}
