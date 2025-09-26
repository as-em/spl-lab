//9. Write a C program to find GCD of two integers.9. Write a C program to find GCD of two integers.

#include <stdio.h>

int gcd(int a, int b){


 if(a%b==0) return b;

 return gcd(b, (a%b));
}
int main(){
int a,b;
scanf("%d %d", &a,&b);
printf("gcd is: %d", gcd(a,b));
return 0;
}
