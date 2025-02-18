#include <stdio.h>

int main(){

    int n , i ;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int  arr[n]  ;
    for(i = 0;i < n;i++){
        printf("Enter %d no element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are : ");
    for(i = 0;i < n;i++){

        printf("%d ",arr[i]);
    }

    return 0;
}
