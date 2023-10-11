#include<stdio.h>
#include<conio.h>
#include<math.h>

struct time{
    int hour,min,sec;
};

void main()
{
    struct time t1={10,10,10},t2={5,30,40},add,sub;
    //printf("The distance between 2 points is : %f",distance);

    add.sec = t1.sec+t2.sec;
    add.min = t1.min+t2.min+(add.sec)/60;
    add.hour = t1.hour+t2.hour+(add.min)/60;
    add.min = (add.min)%60;
    add.sec = (add.sec)%60;

    printf("The addition of time is %d : %d : %d\n",add.hour,add.min,add.sec);


    // sub.sec = t1.sec-t2.sec;
    // sub.min = t1.min-t2.min-(sub.sec)/60;
    // sub.hour = t1.hour-t2.hour-(sub.min)/60;
    // sub.min = (sub.min)%60;
    // sub.sec = (sub.sec)%60;

    //substraction of time...

    while(t2.sec>t1.sec)
    {
        t1.min-=1;
        t1.sec+=60;

    }
    sub.sec = t1.sec-t2.sec;
    while(t2.min>t1.min)
    {
        t1.hour-=1;
        t1.min+=60;
    }
    sub.min=t1.min-t2.min;
    sub.hour=t1.hour-t2.hour;

    printf("The substraction of time is %d : %d : %d\n",sub.hour,sub.min,sub.sec);

getch();
}