//2. WAP to create a structure student having data members rollno, name,address,resigistration no marks and take input from user and sort them according to their name.
#include<stdio.h>
#include<string.h>
struct student
{
    char name[78];
    int id;
    int rno;
    float marks;
    char address[67];
};
int main()
{
    int i,j,n;
    printf("Enter number of students ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the information of student",i+1);
        printf("Enter name:\n");
        scanf("%s",&s[i].name);
        printf("Enter id:\n");
        scanf("%d",&s[i].id);
        printf("Enter regestration number:\n");
        scanf("%d",&s[i].rno);
        printf("Enter marks:\n");
        scanf("%f",&s[i].marks);
        printf("Enter Address:\n");
        scanf("%s",&s[i].address);
    }
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
     printf("\nSorted student information:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("ID: %d\n", s[i].id);
        printf("Registration number: %d\n", s[i].rno);
        printf("Marks: %f\n", s[i].marks);
        printf("Address: %s\n", s[i].address);
    }

}