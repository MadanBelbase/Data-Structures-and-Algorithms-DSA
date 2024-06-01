#include<stdio.h>
int main()
{
    int i,n,a[100],j,temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("\n Enter array element are:");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array element are:");
    for(i=0;i<n-1;i++)
    {
      printf("%d\n",a[i]);  
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            printf("Array element after sorting\n");
            for(i=0;i<n-2;i++)
            {
                printf("%d\n",a[j]);
            }
        }
    }
    return 0;
}