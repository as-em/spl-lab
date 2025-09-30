//2. Write a C program to find maximum and minimum among three numbers.

#include<stdio.h>
int main(){
int  a ,b , c ,min, max;
printf("Enter three numbers:");
scanf("%d %d %d",&a ,&b ,& c );
//find min
if(a <b && a<c ){
    min = a;
}
else if(b<a && b<c){
    min = b;
}
else{
    min = c;
}
printf("min= %d",min);

//find max
if(a >b && a>c ){
    max = a;
}
else if(b>a && b>c){
    max = b;
}
else{
    max = c;
}
printf("max= %d",max);
return 0;
}
