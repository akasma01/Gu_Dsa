#include<stdio.h>
#include<conio.h>
#include<math.h>

struct height{
    int feet,inch;
};

void main()
{
    struct height h1={6,9},h2={2,10},sum;
   // struct height h2={2,2};
    sum.feet = h1.feet+h2.feet;
    sum.inch = h1.inch+h2.inch;
    if(sum.inch>12)
    {
        sum.feet+= sum.inch/12;
        sum.inch = sum.inch%12;
    }

    printf("The sum of heights is %d feet %d inches",sum.feet,sum.inch);

getch();
}