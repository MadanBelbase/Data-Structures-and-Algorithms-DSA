#include<stdio.h>
#include<stdlib.h>
#define size 6
struct stack
{
 int stack[size];
 int top;
}s;
 void push();
 void pop();
 void display();
 void  displaytop();
 int main()
 {
    int choice;
    printf("\n 1 for push \n 2 for pop \n 3 for display \n 4 for displaytop  value of stack \n 5 for exit \n");
    while(1)
    {
    printf("enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        displaytop();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("you entered wrong choice\n");
    }
    }
    return 0;
 }
 void push()
 {
    int data;
    if(s.top==size-1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("enter data to be inserted\n ");
        scanf("%d",&data);
        s.top++;
        s.stack[s.top]=data;
    }
 }
 void pop()
 {
    int data;
    if(s.top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        data=s.stack[s.top];
        s.top--;
        printf("Deleted data = %d\n",data);
    }
 }
 void display()
 {
    int i;
    if(s.top==-1)
    {
        printf("Stcak is empty");
    }
    else
    {
        printf("Stack data are:\n");
        for(i=s.top;i>=0;i--)
        {
            printf("%d\t",s.stack[i]);
        }
    }
 }
 void displaytop()
 {
    if(s.top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack top index is=%d",s.top);
    }
 }