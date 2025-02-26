// 5. Write a C program to find if a triangle is a Right angled triangle or not.

#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    printf("three num :");
    scanf("%d%d%d",&a,&b,&c);

    if(c == sqrt((a*a)+(b*b)) || b == sqrt((a*a)+(c*c)) || a == sqrt((c*c)+(b*b)) ){
        printf("right");
    }
    else{
        printf("not");
    }
    return 0;
}
