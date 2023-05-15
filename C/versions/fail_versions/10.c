#include <stdio.h>
int main ()
{
int year=0,b=0;
scanf("%d",&year);
b=year;
year=year%4;
if(year==0)
printf("%d是闰年",b);
else
printf("%d不是闰年",b);
return 0;
}