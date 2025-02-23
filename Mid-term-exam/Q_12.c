//12. Write a C program to find the summation of even numbers from 1 to n.

#include <stdio.h>

int main (){

    int n,i,sum = 0;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 1; i <= n;i ++){
        
        if(i % 2 == 0){
            sum += i;
        }

    }
    printf("sum = %d ",sum);
return 0;
}
