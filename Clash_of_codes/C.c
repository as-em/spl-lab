//https://codeforces.com/problemset/problem/1873/A

#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char arr[4];
        int count = 0;
        scanf("%s",arr);
        

            if(arr[0] == 'a' ){
                count++;
            }
            if(arr[1] == 'b' ){
                count++;
            }
            if(arr[2] == 'c' ){
                count++;
            }
        
        if(count != 0)printf("yes\n");
        else printf("no\n");

    }

    return 0;
}


