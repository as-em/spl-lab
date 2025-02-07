#include <stdio.h>

int main (){

    int n,i,sum = 0;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 1; i <= n;i += 1){

        sum = sum + (i*i);

    }
    printf("sum = %d ",sum);

return 0;
}
