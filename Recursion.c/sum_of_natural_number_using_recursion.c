// sum of natural number using recursion
#include<stdio.h>
int natural(int n);
int main()
{
    int a,result;
    printf("enter value of n");
    scanf("%d",&a);
    result=natural(a);
    printf("Sum of natural number is = %d",result);
    return 0 ;
}
int natural(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
return n+natural(n-1);
    }

}