// 6. Write a C program to find the series of all prime numbers up to value 100.

#include<stdio.h>

int main(){
    for(int i = 2; i<=100; i++ ){
        int isPrime =1;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
        }
    }
    return 0;
}
