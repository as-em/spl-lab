#include<stdio.h>

int main(){
int arr[10],i;
for ( i=0; i<10; i++){
        printf("Enter Element[%d]: ", i+1);
scanf("%d",&arr[i]);
}
printf("enter the element ypu want to find: ");
int f, n=0;
scanf("%d", &f);
for( i=0; i<10; i++){
    if(f == arr[i]){
        printf("array index: %d", i);
        return 0;
    }

}
    printf("not found");
    return 0;
}



