// https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_C

#include <stdio.h>
#include <string.h>

 
int main() {
    int t,  n , taro = 0 , hanako = 0;
    scanf("%d", &t);
 
    while(t--){

        char str1[101];
        char str2[101];
        scanf("%s%s",str1,str2);

        n = strcmp(str1,str2);
        if(n > 0){
            taro += 3;
        }
        else if(n < 0){
            hanako += 3;
        }
        else{
            taro++;
            hanako++;
        }

    }
    printf("%d %d\n",taro,hanako);
    
 
return 0;
}
 

