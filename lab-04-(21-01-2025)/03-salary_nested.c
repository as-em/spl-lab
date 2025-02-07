#include <stdio.h>

int main(){

    if( !( (current >= 50000 && current <= 100000) || (current >= 8000 && current <= 49000) ) ){

        printf("Invalid input\n");

    }
    else{

        if (current >= 50000 && current <= 100000){

            increment = current * 0.15;

        }
        else if (current >= 8000 && current <= 49000){

            increment = current * 0.10;

        }

        new = current + increment;
        printf("Your increment is: %.2f\n", increment);
        printf("Your new salary is: %.2f\n", new);

    }
    
    return 0;
}




