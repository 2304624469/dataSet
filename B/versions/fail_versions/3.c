#include<stdio.h>
int main()
{
	double number=0,y=0;
	scanf("%lf",&number);
	if(number<0)
	printf("Invalid Value!");
	if(number>0&&number<=50)
	y=0.53*number;
	if(number>50)
	y=50*0.53+(number-50)*(0.53+0.05); 
	printf("cost= %.2f",y);
}