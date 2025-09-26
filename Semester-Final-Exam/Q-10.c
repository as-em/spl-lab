// 10. Write a C program that takes an integer as input and display it in reverse order.

#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter an integers: ");
    scanf("%d", &n);
    for(int i=1; n!=0; i++){
        printf("%d", n%10); 
        n = n/10;
    }
    return 0;
}
