//https://codeforces.com/problemset/problem/1352/A

#include <stdio.h>


int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n,count=0;
        scanf("%d",&n);
        int tmp = n ;
        for(int i=0;tmp !=0;i++){

            if(tmp % 10 != 0)count++;
            tmp /= 10;
        }
        int arr[count];
        int k=count;
        int power = 1;
        for(int i=0;n !=0;i++){
            if(n % 10 != 0){
                arr[--k] = (n % 10) * power;
            }
            n /= 10;
            power *= 10;
        }
        printf("%d\n",count);
        for(int i = 0;i <count;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}

/* 
pow() function use kora jabe na karon pow() function result 
double data type e return kore fole onk somoy ans precise hoy na
like pow(10, 3) er ans hoya uchit 1000 but eta onk somoy 999.999999
return kore ja int e convert korle hoy 999 .
implicit conversion  korar fole  precision errors or unexpected results ase
 */