#include <stdio.h>

int main(){

    int i, num, count = 0; 

    printf("Enter any number  to Check for Prime: ");

    scanf("%d", &num);

    for (i = 2; i < num ; i++){


        if (num % i == 0){

            count++;

            break;

        }

    } 

    

    if (count == 0 && num != 1){

        printf("%d is a Prime number", num);

    }
    else{

        printf("%d is not a Prime number", num);

    }

    return 0;

}
