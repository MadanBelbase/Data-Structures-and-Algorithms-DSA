//Assignment:
//1.WAP to create a structure employee having data members as like name,id,address, salary,position and input details from user and also Create an array of 10 employees and sort them in ascending order of their salary.
#include<stdio.h>
#include<string.h>
struct emplyoee
{
    char name[45];
    int id;
    char address[78];
    float salary;
    char postion[67];
    
};
int main()
{
    int i,n,j;
    struct employee e[100];
    struct temp;
    printf("Enter the  number of employee you what to be sort them in ascending on the basis of salary");
    scanf("%d",&n);
    for(i=1;i=<n;i++)
    {
       printf("Enter the information of employee");
       printf("enter name");
       scanf("%s",&e[i].name);
       printf("Enter id number");
       scanf("%d",&e[i].id);
       printf("Enter address");
       scanf("%s",&e[i].adrdress);
       printf("Enter salary");
       scanf("%f",&e[i].salary);
       printf("Enter postion");
       scanf("%s",&e[i].id);
    }
//for sorting
for(i=0;i<9;i++)
{
    for(j=0;j<10;j++)
    {
      if(e[i].salary>e[j].salary)
      {
        struct temp =e[i].salary;
        e[i].salary=e[j].salary;
        e[j].salary=struct temp;
      }
    }
}
//display
printf("Information of employee");
for(i=0;i<10;i++)
{
  printf("\nName:%s\n,Id: %d,\nAddress: %s,\nSalary:%f,\nPostion: %s\n"e[i].name,e[i].id,e[i].address,e[i].salary,e[i].postion);
}
return 0;   
}