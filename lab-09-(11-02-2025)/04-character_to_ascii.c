// Character to ascii 

#include <stdio.h>

int main(){

    char  ch;
    int ascii_value ;

    printf("Enter a single character:");
    ch = getchar();

    ascii_value = (int)ch;

    printf("ASCII value of %c is %d \n" , ch , ascii_value);

    printf("ASCII value of %c is %d " , ch , ch);


return 0;
}