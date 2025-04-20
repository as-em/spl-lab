// https://codeforces.com/problemset/problem/1873/B


// acceptd but not valid if testcase have mutiple 0 like -  0 0 1 4 0 3
#include <stdio.h>

int main (){

    int t ;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int  arr[n];

        for(int i = 0;i <n;i++){
            scanf("%d",&arr[i]);
        }
           int min = arr[0];
           int r,pro = 1;
        for(int i = 0;i <n;i++){
            if(min >= arr[i]){
                min = arr[i];
                r = i;
            }
        }
        arr[r]++;
        for(int i = 0;i <n;i++){

            pro *= arr[i];
        }
        printf("%d\n",pro);
    }


return 0;
}

// for mutiple 0 just replace this with 3rd for loop 

// for(int i = 0;i <n;i++){
//     if(arr[i] == 0) arr[i]++;
//     pro *= arr[i];
// }
