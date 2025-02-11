// alphabet or not

#include <stdio.h>

int main(){

    char  ch;

    printf("Enter a single character:");
    ch = getchar();
 
//  if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
//  if( isalpha(ch)){
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){

        printf("%c is a alphabet",ch);
        

    }
    else{

        printf("%c is not a alphabet ", ch);

    }

return 0;
}