#include <stdio.h>

int main(){

    int n , i ;
    int odd = 0 , even = 0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int  arr[n]  ;

    printf("Enter elements  : ");
    for(i = 0;i < n;i++){

        scanf("%d",&arr[i]);
    }
 
    for(i = 0;i < n;i++){

        if(arr[i] % 2 == 0){

            even++;

        }
        else{

            odd++;
            
        }
        
    }

    printf("Odd = %d \nEven = %d",odd , even);

    return 0;
}
