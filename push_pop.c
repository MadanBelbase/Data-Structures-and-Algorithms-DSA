#include<stdio.h>
#include<stdlib.h>
#define size 6
 int stack[size];
 int top=-1;
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
        defult:
        printf("you entered wrong choice");
    }
    }
    return 0;
 }
 void push()
 {
    int data;
    if(top==size-1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("enter data to be inserted ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
 }
 void pop()
 {
    int data;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        data=stack[top];
        top--;
        printf("Deleted data = %d",data);
    }
 }
 void display()
 {
    int i;
    if(top==-1)
    {
        printf("Stcak is empty");
    }
    else
    {
        printf("Stack data are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
 }
 void displaytop()
 {
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack top index is=%d",top);
    }
 }