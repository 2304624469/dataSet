#include <stdio.h>
#include <math.h>
int main()
{
 float number=0,cost=0;
 scanf("%f",&number);
 if(number>50)
 {
   cost=0.58*number;
   printf("cost= %.2f",cost);
  }
 else if(number<0)
   printf("Invalid Value!");
 else
  {
   cost=0.53*number;
printf("cost= %.2f",cost);
    }
 return 0;
 }