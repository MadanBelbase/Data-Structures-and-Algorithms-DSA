#include<stdio.h>
int main()
{
  int a,b,i,min,hcf;
  printf("enter value of a and b");
  scanf("%d%d",&a,&b);
  min=(a>b)?b:a;
  for(i=1;i<=min;i++)
  {
    if(a%i==0&&b%1==0)
    {
        hcf=i;
    }
    printf("hcf=%d",hcf);
  }
  return 0;
}
