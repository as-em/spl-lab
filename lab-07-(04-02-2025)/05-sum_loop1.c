#include <stdio.h>

int main (){

    int n,i,sum = 0;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 0; i <= n;i += 3){

        sum += i;

    }
    printf("sum = %d ",sum);
return 0;
}
