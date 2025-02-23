// 4. Write a C program to swap two numbers using a third variable.

#include<stdio.h>

int main(){

    int n;

    printf("num:");
    scanf("%d",&n);

    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }

    return 0;
}
