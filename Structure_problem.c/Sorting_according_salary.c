//1. WAP to create structure employee having data members like, name, salary,id,salary and postion. Create an array of 10 employee and sort them according to their salary.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee {
    char name[45];
    int id;
    char address[78];
    float salary;
    char position[67];
};

int main() 
{
    int n, i, j;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for(i = 0; i < n; i++)
     {
        printf("Enter the information of employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s",&e[i].name);
        printf("Enter ID number: ");
        scanf("%d", &e[i].id);
        printf("Enter address: ");
        scanf("%s", &e[i].address);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        printf("Enter position: ");
        scanf("%s", &e[i].position);
    }

    // Sorting
    for(i = 0; i < n-1; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(e[i].salary > e[j].salary) 
            {
                
                float temp = e[i].salary;
                e[i].salary = e[j].salary;
                e[j].salary = temp;

            }
        }       
    }

    // Display
    printf("Information of employees:\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Address: %s\n", e[i].address);
        printf("Salary: %f\n", e[i].salary);
        printf("Position: %s\n", e[i].position);
    }

    return 0;
}