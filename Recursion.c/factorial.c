//factorial  without using recursion
#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("enter the value");
    scanf("%d",&n);
    for (i=1;i<=n;i++ )
    {
       result = result *i ;
    }
    printf("Factorial of given number = %d",result);
    return 0;
}