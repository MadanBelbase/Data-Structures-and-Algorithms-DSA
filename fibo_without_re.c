#include<stdio.h> 
int main()
{
    int n,a=0,b=1,result,i,c;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i< n-2;i++)
    {
       c=a+b;
       printf("%d\n",c);
       a=b;
       b=c;
    }
    return 0;
}