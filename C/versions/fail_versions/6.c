#include<stdio.h>
#include<math.h>
int main()
{
	int year=0;
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	printf("%d是闰年",year);
	else if(year%4!=0||year%100==0&&year%400!=0)
	printf("%d不是闰年",year);
	else 
	printf("非法输入");
	return 0;
}