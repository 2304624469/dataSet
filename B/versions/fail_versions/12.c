#include <stdio.h>
 int main()
{
 double w=0,number=0;
scanf("%lf",&number);
  if(number>=0&&number<=50)
 { w=number*0.53;
  printf("cost= %.2lf",w);
 }
 if(number<0)
 {
  printf("Invalid Value!");
 }
 else
 { w=0.53*50+(number-50)*0.58;
  printf("cost= %.2lf",w);
  }
 return 0;
 }