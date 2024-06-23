#include<stdio.h>
#include<stdlib.h>
#define size 10
int front =-1;
int rear=-1;
int q[size];
void enqueue();
void dequeue();
void display();
void total_element();
int main()
{
    int n;
    while(1)
    {   printf("\n1.For enqueue \n2.For dequeue \n3.For display \n4.For total_element \n5.exit\n  ");
        printf("enter your choice:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();     
                break;
            case 4:
                total_element();
                 break;
            case 5:
                 exit(0);

             default:
                printf("you enter wrong choice");
        }
    }
     return 0;
}

void enqueue()
{
    int data;
    printf("enter data you want be insert\n");
    scanf("%d",&data);
    if(rear==size-1)
    {
        printf("queue is full");
        return;
    }
    else
    {

     if(front ==-1 &&rear ==-1) 
    {
        front=rear=0;
        q[rear]=data;
    }
    else
    {
      rear++;
      q[rear]=data;
    }
}
}
void dequeue()
{
int item;
if(front==-1&&rear==-1)
{
    printf("queue is empty");
    return;
}
else
{
    item=q[front];
    front++;
    printf("deleted item= %d\t",item);
} 
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
        return;
    }
    else
    {
      printf("queue element are:\n");
      for(i=front;i<=rear;i++)
      {
        printf("%d\t",q[i]);

      }
    }
}
void total_element()
{
    int total;
    total=rear-front+1;
    if(front==-1&&rear==-1)
    {
        printf("queue has no data");
        return;
    }
    else
    {
     printf("total no of element = %d\t",total);
    }
}


 

