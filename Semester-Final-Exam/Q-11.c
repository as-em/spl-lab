//11. Write a C program to display all elements of an array and also calculate sum of elements of that array.

#include <stdio.h>
int main(){

  int n ,i, sum=0;
  scanf("%d",&n);
  int arr[n];

  for(i =0 ;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i =0 ;i<n;i++){
    printf("%d ",arr[i]);
  }
  for(i=0; i<n; i++){
    sum += arr[i];
  }
  printf("\nSum of all elements is : ", sum);

return 0;
}
