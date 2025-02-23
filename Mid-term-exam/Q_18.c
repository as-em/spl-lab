// 18. Write a c program to print the Square star pattern. 

#include<stdio.h>
int main()
{
    int n ;
    printf("N = ");
    scanf("%d", &n);
    for(int row = 1;row <= n;row++){

        for(int col = 1;col <= n;col++){
     
           printf("* ");
     
        }
     
        printf("\n");
     
       }
     
    return 0;
}
