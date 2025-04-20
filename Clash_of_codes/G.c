//https://codeforces.com/problemset/problem/1669/A

#include <stdio.h>

int main() {
    int t, r;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&r);
        if(r>=1900)printf("Division 1\n");
        else if(r>=1600&&r<=1899)printf("Division 2\n");
        else if(r>=1400&&r<=1599)printf("Division 3\n");
        else printf("Division 4\n");
    }

    return 0;
}