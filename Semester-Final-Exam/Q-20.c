// 20. Write a C program to read data from keyboard, write it to a file called INPUT.txt. Again open the same file to read the same data from the file and display it to the terminal.


#include<stdio.h>

int main(){

    FILE *fp;

    char data[1000];

    printf("Enter some text: ");
    fgets(data,sizeof(data),stdin);

    fp = fopen("INPUT.txt","w");


    fputs(data,fp);
    fclose(fp);

    fp = fopen("INPUT.txt","r");
    printf("Text from INPUT file: \n");

    while(fgets(data,sizeof(data),fp) != NULL){
        printf("%s",data);
    }

    fclose(fp);


    return 0;
}
