#include<stdio.h>
int fact(int n);
int main()
{
    int a,result;
    printf("enter the value ");
    scanf("%d",&a);
    result = fact(a);
    printf("Factorial of given number is = %d",result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
       return n*fact(n-1);
    }
}