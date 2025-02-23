#include<stdio.h>

void grade(int marks);

int main (){
        
        int n;
        printf("how many student : ");
        scanf("%d",&n);
        int roll[n];
        int marks[n];


        for(int i = 0; i < n;i++){

            printf("Enter student Roll no : ");
            scanf("%d",&roll[i]);
            printf("Enter marks of  Roll no %d : ",roll[i]);            
            scanf("%d",&marks[i]);

        }
        for(int i = 0; i < n;i++){

            printf("Roll = %d  Marks =  %d Grade = ", roll[i] , marks[i]);
            grade(marks[i]);
            

        }


return 0;
}


void grade(int marks){

    if( marks >= 80 && marks <= 100){

        printf("A+\n");
    }
    else if( marks >= 70 && marks <= 79){

        printf("A\n");
    }
    else if( marks >= 60 && marks <= 69){

        printf("A-\n");
    }
    else if( marks >= 50 && marks <= 59){

        printf("B\n");
    }
    else if( marks >= 40 && marks <= 49){

        printf("c\n");
    }
    else{

        printf("Fail\n");
    }
    
}
