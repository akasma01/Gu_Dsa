#include<stdio.h>
#include<conio.h>
#include<string.h>

// struct name{
//     char f_name[10],m_name[10],l_name[10];
// };

struct dob{
    int day,month,year;
};

// struct marks{
//     int eng,math,science;
// };

struct student
{
    int r_no;
    // struct name n;
    char name[30],gender[10];
    char grade;
    struct dob d;
    int marks[3];
    float avg;


};

void main()
{
    struct student s1[2];
    char match[30];
    int i=0;
    int j=0,k=0;
    float a,c_avg;
    for(i=0;i<2;i++)
    {
    printf("Enter details of the student %d:-\n",i+1);
    printf("Enter Roll No. of the student\n");
    scanf("%d",&s1[i].r_no);
    printf("Enter Name of the student\n");
    scanf("%s",&s1[i].name); 
    // printf("Enter middle name of the student\n");
    // scanf("%s",&s1[i].n.m_name);
    // printf("Enter last name of the student\n");
    // scanf("%s",&s1[i].n.l_name);
    printf("Enter Gender of the student\n");
    scanf("%s",&s1[i].gender);
    printf("Please enter birth details of the student %d:-\n",i+1);
    printf("Enter Day\n");
    scanf("%d",&s1[i].d.day);
    printf("Enter Month\n");
    scanf("%d",&s1[i].d.month);
    printf("Enter Year\n");
    scanf("%d",&s1[i].d.year);
    printf("Enter students English marks\n");
    scanf("%d",&s1[i].marks[0]);
    printf("Enter students Maths marks\n");
    scanf("%d",&s1[i].marks[1]);
    printf("Enter students Science marks\n");
    scanf("%d",&s1[i].marks[2]);
    a = (s1[i].marks[0]+s1[i].marks[1]+s1[i].marks[2])/3;
    s1[i].avg=a;
    // printf("%f\n",a);
    // printf("%f\n",s1[i].avg[i]);
        // if(a>90)
        // {
        // s1[i].grade = 'A';
        // }   
        // else if (a>=70&&a<=90)
        // {
        // s1[i].grade = 'B';
        // }
        // else if (a>=50&&a<=70)
        // {
        // s1[i].grade = 'C';
        // }
        // else
        // {
        //  s1[i].grade = 'D';
        // }
    }
    
printf("Roll No.\tName  Gender\t   DOB\t      English    Maths    Science     Average\n");
    for(i=0;i<2;i++)
    {
    printf("%5d%16s%5s%10d-%d-%d%7d%10d%10d%15f\n",s1[i].r_no,s1[i].name,s1[i].gender,s1[i].d.day,s1[i].d.month,s1[i].d.year,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2],s1[i].avg);
    c_avg+= s1[i].avg;
    }
printf("The Class average is %f\n",(c_avg/2));

// printf("%5d\t%20s\t%10s\t%5d %5d %5d\t %d\t %d\t%d\t %f\n",s1[i].r_no,s1[i].name,s1[i].gender,s1[i].d.day,s1[i].d.month,s1[i].d.year,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2],s1[i].avg);



//    printf("Students whose aggregate is less than 40\n");
//    printf("Roll No. Name Gender\t   DOB\t      English  Maths  Science   Grade\n");
// for(i=0;i<2;i++)
// {   
//     if(s1[i].aggr[i]<40)
//     {
//         printf("%d\t  %s\t%s\t%d %d %d\t %d\t %d\t %d      %c\n",s1[i].r_no,s1[i].name,s1[i].gender,s1[i].d.day,s1[i].d.month,s1[i].d.year,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2],s1[i].grade);
//         k=1;
//     }
// }
//         if(k==0)
//     {
//         printf("Sorry No Records Found...\n");
//     }


//    printf("Enter the name of the student\n");
//    scanf("%s",match);

//     printf("Roll No. Name Gender\t   DOB\t      English  Maths  Science   Grade\n");
//     for(i=0;i<2;i++)
//     {
//         if((strcmp(s1[i].name,match))==0)
//         {
//         printf("%d\t  %s\t%s\t%d %d %d\t %d\t %d\t %d      %c\n",s1[i].r_no,s1[i].name,s1[i].gender,s1[i].d.day,s1[i].d.month,s1[i].d.year,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2],s1[i].grade);
//             j=1;
//         }
//     }
        



    // if(j==0)
    // {
    //     printf("Sorry No Records Found...\n");
    // }




    // for(i=0;i<2;i++)
    // {
    // printf("%d\t%s\t%s\t%d %d %d\t\t %d\t %d\t %d",s1[i].r_no,s1[i].name,s1[i].gender,s1[i].d.day,s1[i].d.month,s1[i].d.year,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2]);
    // }
getch();
}