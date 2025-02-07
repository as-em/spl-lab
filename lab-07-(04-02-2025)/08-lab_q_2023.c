#include <stdio.h>
#include <math.h>

int main (){

    int n,i;
    // long long sum = 0;
    double sum = 0;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 1; i <= n;i += 1){

        // sum = sum + (1/i*i);
        sum = sum + (1/pow(i,i));

    }
    printf("sum = %f ",sum );
return 0;
}
