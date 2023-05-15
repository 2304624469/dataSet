#include<stdio.h>
int main()
{
 float number=0,c=0;
 scanf("%f",&number);
 if(number>=0||number<=50)
  {
  c=0.53*number;
  printf("cost= %.2f",c);
  }
 if(number>50)
  {
   c=50*0.53+0.05*(number-50);
   printf("cost= %.2f",c);
  }
  if(number<0)
  printf("Invalid Value!");
  return 0;
}