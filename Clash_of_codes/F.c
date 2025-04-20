// https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_B


#include <stdio.h>

int main(){

  char x[1001];
 

  while(1){

    scanf("%s", x);

    if(x[0] == '0' )break;

    int sum = 0;
    for(int i = 0; x[i] != '\0';i++){

      sum += x[i] - '0';

    }
    printf("%d\n",sum);


  }
  

    return 0;
}