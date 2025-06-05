#include<stdio.h>

int main(){

        int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
for ( i=0; i<10; i++){
        printf("Enter Element[%d]: ", i+1);
scanf("%d",&arr[i]);
}
printf("enter the element ypu want to find: ");
int f;
scanf("%d", &f);
for(int i=0; i<10; i++){
    if(f == arr[i]){
        printf("array index: %d", i);
        return 0;
    }

}
    printf("not found");
    return 0;
}



