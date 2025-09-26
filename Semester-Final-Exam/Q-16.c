// 16. Write a C program to determine whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len,  isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  

    len = strlen(str);

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}
