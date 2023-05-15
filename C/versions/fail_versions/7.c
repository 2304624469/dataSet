#include<stdio.h>
int main()
{
	int year=0;
	float i=0;
	scanf("%d", &year);
	i = year%4;
	if(i == 0)
	printf("%d是闰年", year);
	else
	printf("%d不是闰年", year);
	return 0;
}