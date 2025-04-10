#include <stdio.h>




int main(){

  int n ,i;
  scanf("%d",&n);
  int arr[n];

  for(i =0 ;i<n;i++){

  scanf("%d",&arr[i]);

  }



   int large = 0, seclarge = 0;
   int small = 0 , secsmall = 0;

  for(i = 0 ;i<n;i++){

     if(arr[large] < arr[i]) {

         seclarge = large;
         large = i;
      }
     if(arr[small] > arr[i]) {

         secsmall = small;
         small = i;
      }

  }

  printf("max = %d\n min = %d\n", arr[large] , arr[small] );
  printf("sec max = %d\n sec min = %d\n", arr[seclarge] , arr[secsmall] );
return 0;
}


