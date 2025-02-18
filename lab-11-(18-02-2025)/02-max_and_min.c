#include <stdio.h>

int main(){

    int n , i ;
    int max , min;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int  arr[n]  ;

    printf("Enter elements  : ");
    for(i = 0;i < n;i++){

        scanf("%d",&arr[i]);
    }
 
        max = arr[0];
        min = arr[0];

    for(i = 0;i < n;i++){

        if(max < arr[i]){

            max = arr[i];

        }
        if(min > arr[i]){

            min = arr[i];
            
        }
        
    }

    printf("Max = %d \nMin = %d",max , min);

    return 0;
}
