// https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B

#include <stdio.h>

int main(){

    


    while(1){
        int n , x,count=0; 
        scanf("%d%d",&n,&x);
        if(n == 0 && x == 0){
            return 0;
        }
        for(int i = 1 ; i <= n - 2 ;i++){

            for(int j = i + 1;j <= n - 1;j++){

                for(int k = j + 1; k <= n;k++){

                    if(i + j + k == x){
                        count++;
                    }
                }
            }  
        }
        printf("%d\n",count);
    }
    


  
    return 0;
}