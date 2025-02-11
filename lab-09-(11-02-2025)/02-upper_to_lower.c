// upper to lower and lower to upper

#include <stdio.h>

int main(){

    char  ch;

    printf("Enter a single character:");
    ch = getchar();

    if(isupper(ch)){

        printf("%c\n", tolower(ch));
        
        putchar(tolower(ch));

    }
    else{

        printf("%c\n", toupper(ch));

        putchar(toupper(ch));
    }

return 0;
}