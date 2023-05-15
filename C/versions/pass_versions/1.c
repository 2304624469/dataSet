#include<stdio.h>
int main(void)
{ 
  int year;
  scanf("%d",&year);
  if(year>0)
  {
  	if(year%4==0&&year%100!=0||year%400==0)
  		printf("%d是闰年\n",year);
  	else if(!(year%4==0&&year%100!=0||year%400==0) )
  		printf("%d不是闰年\n",year);
  }
  else
  	printf("非法输入");
  return 0;
}