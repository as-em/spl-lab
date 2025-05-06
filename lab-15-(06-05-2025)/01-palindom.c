#include<stdio.h>
#include<string.h>


int main(){

   char a[20];

   scanf("%s",a);

   int n = strlen(a);
   int i = 0 ; int j = n-1;
   int f =1 ;

   for(i = 0;i<n/2;i++){
    if(a[i] != a[j]){
        f = 0;
        break;
    }
    j--;
   }

   if(f == 1){

    printf("palindrome");
   }
   else{
        printf("not palindrome");
   }

return 0;

}
