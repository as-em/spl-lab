// 10. Write a C program to find the factorial of a number. 

#include <stdio.h>

int main(){

    int n;
    int factorial = 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 1;i <=n; i++){
   
        factorial *= i;
       
       }

       printf("factorial = %d",factorial);

    return 0;

}
