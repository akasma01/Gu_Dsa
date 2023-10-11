#include<stdio.h>
#include<conio.h>

struct max{
    int a,b,c;
};

void main()
{
    struct max m1={90,47,130};
    if(m1.a>m1.b)
    {
        if(m1.a>m1.c)
        printf("%d is greatest\n",m1.a);
        else
        printf("%d is greatest\n",m1.c);
        
    }
    else if(m1.a<m1.b)
    {
        if(m1.b>m1.c)
        printf("%d is greatest\n",m1.b);
        else
        printf("%d is greatest\n",m1.c);
    }
    else
    {
        printf("Values are not unique\n");
    }
    

getch();
}