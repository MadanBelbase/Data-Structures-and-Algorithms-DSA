//fibonacci series using recursion
#include<stdio.h>
int fibo(int a); 
int main()
{
    int n,result,i;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i< n ;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}
int fibo(int a)
{
    if(a==0||a==1)
    {
        return a;
    }
    else 
    {
        return fibo(a-1)+fibo(a-2);
    }
}