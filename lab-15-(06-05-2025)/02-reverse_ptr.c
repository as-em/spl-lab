#include<stdio.h>
#include<string.h>


int main(){

    int n = 5;
    int ar[5] = {1,2,3,4,5};

    int *a = &ar[0];
    int *z = &ar[n-1];
    int i;

    int f;

    for(i = 0;i<n/2 ;i++){

        f = *a;
        *a = *z;
        *z = f;
        a++;z--;
    }


    for(i = 0;i<n;i++){

       printf("%d ",ar[i]);
    }

return 0;

}
