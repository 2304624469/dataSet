#include<stdio.h>
int fun(int n){
	if((n%4==0&&n/100!=0)||(n%400==0))
		return 1;
	return 0; 
} 
int main()
{
	int year=0;
	scanf("%d",&year);
	if(fun(year))
		printf("%d是闰年\n",year);
	else
		printf("%d不是闰年\n",year);
	return 0;
}