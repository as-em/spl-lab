// 15. Write a C program to perform all basic string handling operations

#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50],str3[50];
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string :");
    scanf("%s",str2);
    printf("lenght of str1 : %d \n",strlen(str1));
    printf("lenght of str2 : %d \n",strlen(str2));

    strcpy(str3,str1);
    printf("copied str1 into str3 : %s\n",str3);

    strcat(str3,str2);
    printf("concatenated str2 into str3 :%s \n",str3);

    int cmp =strcmp(str1,str2);
    if(cmp==0){
    printf("str1 and str2 are equal");
    }
    else{
        printf("str1 is greater than str2.");


    }
    return 0;
}
