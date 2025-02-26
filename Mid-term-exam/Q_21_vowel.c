//vowel or not 

#include <stdio.h>

int main(){

    char ch;

    printf("Enter a single character:");
    ch = getchar();

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||   
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  ){

        printf("It is a vowel.");

    }
    else{

        printf("It is a consonent.");

    }
