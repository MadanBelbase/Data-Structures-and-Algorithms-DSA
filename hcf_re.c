#include<stdio.h>
int hcf(int a, int b);
int main()
{
    int a,b,hcf1;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    hcf1 = hcf(a,b);
    printf("RESULT = %d",hcf1);
    return 0;
}
int hcf(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return hcf(b,a%b);
    }
}