#include<stdio.h> 
#include<stdlib.h>
#define max 100

void insert_end();
void insert_spec();
void display();
void delete_end();
void delete_spec();
int size = -1;
int list[max];
int main() 
{
    int n;
    printf("\n1 for insert at end\n2 for insert at specific postion \n3 For display\n4 For delete at end\n5 for delete at specific postion\n6 for exit from program\n");

    while (1) {
        printf("Enter choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
               insert_end();
                break;
            case 2:
                
                insert_spec();
                break;
            case 3:
                display();
                break;
            case 4:
               delete_end();
                break;
            case 5:
                delete_spec();
                break;
            case 6:
                exit(0);
            default:
                printf("You entered wrong choice\n");
        }
    }
    return 0;
}
void insert_end()
{
    int data;
    printf("Enter data you want be insert:\n");
    scanf("%d",&data);
    if(size==max-1)
    {
        printf("List is Full\n");
        return;
    }
    else if(size==-1)
    {
        size=0;
        list[size]=data;
    }
    else
    {
        size++;
        list[size]=data;
    }

}
void insert_spec()
{
    int data,pos;
    printf("Enter poition you want be insert\n");
    scanf("%d",&pos);
    printf("Enter data you want be insert\n");
    scanf("%d",&data);
    if(pos==max-1)
    {
        printf("List is full \n");
        return;
    }
    else if(pos>size+1 && pos<0)
    {
        printf("You have to enter  right size ");
        return;
    }
    else
    {
      int i;
      for(i=size;i>=pos-1;i--)
      {
        list[i+1]=list[i];
      }
      list[pos-1]=data;
      size++;
    }
}
void display()
{
    int i;
    printf("list element are:\n");
    for(i=0;i<=size;i++)
    {
        printf("%d\n",list[i]);
    }
}
void delete_end()
{
    int data;
    if(size==-1)
    {
        printf("List is empty\n");
    }
    else 
    {  
    data = list[size];
    size--;
    printf("Deleted item = %d\n",data);
    }
}
void delete_spec()
{
    int data,pos;
    printf("Enter position you want be deleted: ");
    scanf("%d",&pos);
    if(pos>size+1 && pos<0)
    {
        printf("You have to enter  right size \n");
        return;
    }
    else
    {
      data = list[pos-1];
      int i;

      for(i=pos-1;i<=size;i++)
      {
      list[i]=list[i+1];
      }
      size--;
      printf("Deleted item = %d\n",data);
    }
}