#include<stdio.h>
#include<conio.h>
#include<string.h>


struct dob{
    int day,month,year;
};

struct Employee
{
    int emp_id;
    // struct name n;
    char name[30],gender[10];
    float Salary;
    struct dob d;

};

void main()
{
    struct Employee emp[3];
    int i=0,j=0,index;
    for(i=0;i<3;i++)
    {
    printf("Enter details of the Employee %d:-\n",i+1);
    printf("Enter Employee id of the Employee\n");
    scanf("%d",&emp[i].emp_id);
    printf("Enter Name of the Employee\n");
    scanf("%s",&emp[i].name); 
    // printf("Enter middle name of the student\n");
    // scanf("%s",&s1[i].n.m_name);
    // printf("Enter last name of the student\n");
    // scanf("%s",&s1[i].n.l_name);
    printf("Enter Gender of the Employee\n");
    scanf("%s",&emp[i].gender);
    printf("Please enter birth details of the student %d:-\n",i+1);
    printf("Enter Day\n");
    scanf("%d",&emp[i].d.day);
    printf("Enter Month\n");
    scanf("%d",&emp[i].d.month);
    printf("Enter Year\n");
    scanf("%d",&emp[i].d.year);
    printf("Enter Salary of Employee\n");
    scanf("%f",&emp[i].Salary);

    }
    
printf("Employee Id\tName  Gender\t   DOB\t           Salary\n");
    for(i=0;i<3;i++)
    {
    printf("%5d%14s%7s%9d-%d-%d%20f\n",emp[i].emp_id,emp[i].name,emp[i].gender,emp[i].d.day,emp[i].d.month,emp[i].d.year,emp[i].Salary);
    }
printf("Enter the row no. of employee which you want to edit\n");
scanf("%d",&index);
for(i=0;i<3;i++)
{
    if(i==index-1)
    {
        printf("Please Edit details of employee at postion %d\n",index);
        printf("Enter Employee id of the Employee\n");
    scanf("%d",&emp[i].emp_id);
    printf("Enter Name of the Employee\n");
    scanf("%s",&emp[i].name); 
    // printf("Enter middle name of the student\n");
    // scanf("%s",&s1[i].n.m_name);
    // printf("Enter last name of the student\n");
    // scanf("%s",&s1[i].n.l_name);
    printf("Enter Gender of the Employee\n");
    scanf("%s",&emp[i].gender);
    printf("Please enter birth details of the student %d:-\n",i+1);
    printf("Enter Day\n");
    scanf("%d",&emp[i].d.day);
    printf("Enter Month\n");
    scanf("%d",&emp[i].d.month);
    printf("Enter Year\n");
    scanf("%d",&emp[i].d.year);
    printf("Enter Salary of Employee\n");
    scanf("%f",&emp[i].Salary);
    j=1;
    }
}

    if(j==1)
    {
        printf("Employee at position %d found and edited successfully\n",index);
            printf("Employee Id\tName  Gender\t   DOB\t           Salary\n");
    for(i=0;i<3;i++)
    {
    printf("%5d%14s%7s%9d-%d-%d%20f\n",emp[i].emp_id,emp[i].name,emp[i].gender,emp[i].d.day,emp[i].d.month,emp[i].d.year,emp[i].Salary);
    }
    }
    else
    {
        printf("Sorry no employee found at %d position.\n",index);
    }


getch();
}