#include<stdio.h>
#include<conio.h>
#include<math.h>

struct dist{
    int x,y;
};

void main()
{
    struct dist p1={6,3};
    struct dist p2={2,2};
    float distance;
    distance = sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
    printf("The distance between 2 points is : %f",distance);


getch();
}