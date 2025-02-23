// 19. Write a C program to display the pyramid pattern. 


#include <stdio.h>

int main(){

 int n;
 printf("Enter row : ");
 scanf("%d",&n);

  for(int row = 1;row <= n;row++){

      for(int sp = row;sp <= n;sp++){

          printf(" ");
      }

      for(int col = 1;col <= row;col++){

          printf("* ");
      }
      printf("\n");
  }


return 0;
}
