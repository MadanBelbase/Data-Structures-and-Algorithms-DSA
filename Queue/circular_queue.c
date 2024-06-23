#include<stdio.h>
#include<stdlib.h>
#define size 4
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
    if(front==0&& rear==size-1)
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
      rear=(rear+1)%size;
      q[rear]=data;
    }
}
}
void dequeue()
{
int item;
if(front==-1&&rear==-1||rear==front-1)
{
    printf("queue is empty");
    return;
}
else
{
    item=q[front];
    if(front==rear)
    {
    rear=front=-1;
    }
    else
    {
      front=((front+1)%size); 
    }
      printf("deleted element is = %d\t",item);
} 
}
void display()
{
    int i;
    i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
        return;
    }
    else
    {
      printf("queue element are:\n");
      do
      {
        printf("%d\t",q[i]);
        i=(i+1)%size;
      } while ((i!=(rear+1)%size));
      }
      
    }
void total_element()
{
    int count=0,i;
    if(front==-1&&rear==-1)
    {
        printf("queue has no data");
        return;
    }
    else
    {
        i=front;
        do
        {
            count++;
            i=(i+1)%size;
        } while ((i!=rear+1)%size);
        
     printf("total no of element = %d\t",count);
    }
}


 


