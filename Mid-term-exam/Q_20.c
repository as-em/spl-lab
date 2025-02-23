//20. Write a C program to display the Right Triangle Star pattern. 

#include <stdio.h>

int main(){

 int n;
 printf("Enter row : ");
 scanf("%d",&n);

  for(int row = 1;row <= n;row++){

      for(int col = 1;col <= row;col++){

          printf("* ");
      }
      printf("\n");
  }


return 0;
}
