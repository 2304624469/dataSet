#include<stdio.h>
int main()
{
int year,b,c,d;
scanf("%d",&year);
b=year%4;
d=year%100;
c=year%400;
if(year<=0)
printf("输入错误显示非法输入");
else if(c==0)
printf("%d是闰年",year);
else if(b==0&&d!=0)
printf("%d是闰年",year);
else if(d==0&&c!=0)
printf("输入错误显示非法输入",year);
else
printf("输入错误显示非法输入",year);
return 0;
}