#include<stdio.h>
void main()
{
int year=0,a=0;
scanf("%d",&year);
if((year/4==0&&year/100!=0)||(year/400==0))
  a=1;
else
  a=0;
  if(a=1)
printf("%d是闰年",year);
else if(a=0)
 printf("%d不是闰年",year);
}