#include <stdio.h>

int main(){

    int n , i , sum = 0 ;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int  arr[n]  ;
    for(i = 0;i < n;i++){
        printf("Enter %d no element : ",i);
        scanf("%d",&arr[i]);
    }

    for(i = 0;i < n;i++){

        sum += arr[i];
    }

    printf("Sum =  %d",sum);

    return 0;
}
