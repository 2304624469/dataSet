#include <stdio.h>
int main()
{
  int year;
  scanf("%d",&year);
  if(year<=0)
   printf("非法输入");
  else if((year%4==0&&year/100!=0)||(year%400==0))
   printf("%d是闰年\n",year);
  else
   printf("%d不是闰年\n",year);
  return 0;
 }