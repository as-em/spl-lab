#include <stdio.h>

int main (){

    int n,i;

    printf("Enter the last term of the series = ");
    scanf("%d",&n);

    for(i = 5; i <= n;i += 5){

        printf("%d ",i);

    }

return 0;
}