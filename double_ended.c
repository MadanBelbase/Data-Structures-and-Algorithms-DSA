//wap to implement double ended having following function
#include<stdio.h>
#include<stdlib.h>
#define size 10
void enqueue_r();
void dequeue_r();
void display();
void enqueue_f();
void dequeue_f();
int front = -1;
int rear = -1;
int q[size];
int i;
int data;
int main()
{
    int n;
    printf("\n 1 for enqueue from front \n 2 for dequeue from rear \n 3 for display \n 4 for enqueue from front \n 5 for dequeue from front \n 6 for exit from program");
    while(1)
    {
        printf("Enter choice ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                 enqueue_r();
                break;
            case 2:
                dequeue_r();
                break;
            case 3:
                 display();
                 break;
            case 4:
                enqueue_f();
                break;
            case 5:
                dequeue_f();
                break;
            case 6:
                exit(0);
            default:
                 printf("you enter wrong choice");

                
        }

    }
    return 0;
}
void enqueue_r()
{
    int data;
    printf("Enter data you want to insert");
    scanf("%d",&data);
    if(front == 0 && rear == size-1)
    {
        printf("Dequeue is full\n");
        return 0;
    }
    else if(rear==-1&&front==-1)
    {
        front=rear=0;
        q[rear]=data;
    }
    else
    {
        if(rear!=size-1)
        {
            rear++;
            q[rear]=data;
        }
        else
        {
            for(i=front;i<=rear;i++)
            {
                q[i-1]=q[i];
                q[rear]=data;
                front--;
            }
        }
    }
}
    void dequeue_r()
    {
    if(front == -1 && rear == -1)
    {
        printf("Dequeue is empty\n");
        return 0;
    }
    else if(rear==front)
    {
        data=q[rear];
        front=-1;
        rear=-1;
    
    
    }
    else
        {
            data = q[rear];
            rear=rear-1;
        }
    }
    void display()
    {
        if(rear==-1&&rear==-1)
        {
          printf("Dequeue is empty");
        }
        else
        {
            for(i=front;i=<rear;i++)
            {
             printf("%d",i);
            }
        }
    }
    void enqueue_f()
    {
        int data;
        if(front==0 && rear==max-1)
    {
            printf("dequeue is overflow");
            return;
    }
        else if(rear==-1&&front==-1)
        {
          rear=front=0;
          q[rear]=data;
        }
         else if(front!=0)
         {
            front=front-1;
            q[front]=data;
         }
        else 
        {
         for(i=rear;i>=front;i++)
         {
            q[i+1]=q[i];
            q[front]=data;
         }

        }
    }

    void dequeue_f()
    {
    if(front == -1 && rear == -1)
    {
        printf("Dequeue is empty\n");
        return 0;
    }
    else if(rear==front)
    {
        data=q[front];
        front=-1;
        rear=-1;
    
    
    }
    else
     {
            data = q[front];
            front++;
        }
        printf("Deleted item = %d\t",data);
    }

