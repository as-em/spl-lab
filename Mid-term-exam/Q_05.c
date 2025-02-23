// 5. Write a C program to find if a triangle is a Right triangle or not.

#include<stdio.h>

int main(){

    int a,b,c;
    printf("three num :");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("right");
    }
    else{
        printf("not");
    }
    return 0;
}
