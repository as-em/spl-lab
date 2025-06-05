#include<stdio.h>
int main()
{
    int n , x=0 , y=1 , i , s;
    printf("N = ");
    scanf("%d", &n);
    
    printf("First %d Fibonacci numbers:\n", n);

    if (n >= 1) printf("%d ", x);
    if (n >= 2) printf("%d ", y);
    
    for(i=2; i< n; i++)
    {
        s = x+y;
        printf("%d ", s );
        x = y;
        y = s;
    }
    return 0;
}
