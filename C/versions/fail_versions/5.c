#include<stdio.h>
#include<math.h>
int main(){
   int year;
   
   while(scanf("%d",&year)!=EOF)
   {
	   
	   if((year%100!=0&&year%4==0)||year%400==0)
		printf("%d是闰年",year);
	   else
		   printf("%非法输入",year);
   }
   return 0;
}