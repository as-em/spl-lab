// 12. Write a C program to search an element from a linear array.

#include<stdio.h>
int main(){
    int n,f;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find :");
    scanf("%d",&f);
    for(int i=0;i<n;i++){
        if(f==arr[i]){
    printf("Element %d found at index : %d \n",f,i);
    return 0;
        }
    }
    printf("Not found in array");

    return 0;
}
