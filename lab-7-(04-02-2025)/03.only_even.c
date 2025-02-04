#include <stdio.h>

int main (){

    int n,i;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 2; i <= n;i += 2){

        printf("%d ",i);

    }

return 0;
}