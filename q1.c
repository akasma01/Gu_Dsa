#include<stdio.h>
#include<conio.h>

struct name{
    char f_name[10],m_name[10],l_name[10];
};

struct dob{
    int day,month,year;
};

struct marks{
    int eng,math,science;
};

struct student
{
    int r_no;
    struct name n;
    char gender[10];
    struct dob d;
    struct marks m;

};

void main()
{
    struct student s1;
    printf("Enter details of the student\n");
    printf("Enter Roll No. of the student\n");
    scanf("%d",&s1.r_no);
    printf("Enter first name of the student\n");
    scanf("%s",&s1.n.f_name); 
    printf("Enter middle name of the student\n");
    scanf("%s",&s1.n.m_name);
    printf("Enter last name of the student\n");
    scanf("%s",&s1.n.l_name);
    printf("Enter Gender of the student\n");
    scanf("%s",&s1.gender);
    printf("Please enter birth details of the student\n");
    printf("Enter Day\n");
    scanf("%d",&s1.d.day);
    printf("Enter Month\n");
    scanf("%d",&s1.d.month);
    printf("Enter Year\n");
    scanf("%d",&s1.d.year);
    printf("Enter students English marks\n");
    scanf("%d",&s1.m.eng);
    printf("Enter students Maths marks\n");
    scanf("%d",&s1.m.math);
    printf("Enter students Science marks\n");
    scanf("%d",&s1.m.science);

    printf("Following are the details of the student\n");
    printf("Roll No. First Name  Middle Name  Last Name  Gender\tDOB\tEnglish  Maths  Science\n");
    printf("%d\t\t%s\t  %s\t \t%s\t  %s\t%d %d %d\t\t %d\t %d\t %d",s1.r_no,s1.n.f_name,s1.n.m_name,s1.n.l_name,s1.gender,s1.d.day,s1.d.month,s1.d.year,s1.m.eng,s1.m.math,s1.m.science);
getch();
}