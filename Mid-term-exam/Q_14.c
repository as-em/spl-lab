// 14. Write a C program to print the digits of a number. 


// input = 486
// output = 6
//          8
//          4

// #include <stdio.h>

// int main(){

//     int n, r;

//     printf("Enter a number : ");
//     scanf("%d", &n);

//     printf("digits are\n");

//     for(int i=1; n != 0; i++){

   
//         r = n%10;
//         n = n/10;
//         printf("%d \n", r);

//     }


//     return 0;
// }



// input = 486
// output = 4
//          8
//          6

#include <stdio.h>

int main(){

    int n, reverse = 0;
    int r;

    printf("Enter a digit : ");
    scanf("%d", &n);
     


    for(int i=1; n != 0; i++){

        reverse  *= 10;
        reverse  += n%10;
        n = n/10;

    }


    printf("digits are :");

    for(int i=1; reverse  != 0; i++){

   
        r = reverse % 10;
        reverse = reverse/10;
        printf("%d ", r);

    }

    return 0;
}
