// 17. Write a C program to find the print first n Fibonacci Number. 


#include <stdio.h>



int main (){

   int n,  i ;
   int x ,  y ,  s ;
   
   printf("Enter n : ");
   scanf("%d", &n);
   
   x = 0 ;
   y = 1 ;
   printf("%d %d ", x, y);
 
   
   for( i = 2 ; i <= n;i++){
       
       s =   x + y ;
       x =  y;
       y =  s;
       
       printf("%d ", s );
       
   }
    
return 0;
}
