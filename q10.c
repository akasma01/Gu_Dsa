#include<stdio.h>
#include<conio.h>
#include<math.h>

struct leap{
    int year;
};

void main()
{
    struct leap y={2024};
      if (y.year % 400 == 0) {
      printf("%d is a leap year.", y.year);
   }

   else if (y.year % 100 == 0) {
      printf("%d is not a leap year.", y.year);
   }

   else if (y.year % 4 == 0) {
      printf("%d is a leap year.", y.year);
   }

   else {
      printf("%d is not a leap year.", y.year);
   }


getch();
}