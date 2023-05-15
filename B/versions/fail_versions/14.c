#include<stdio.h>
int main()
{
	float number=0,y=0;
	scanf("%f",&number);
	if(0<=number<=50)
	y=0.53*number;
	if(number>50)
	y=(number-50)*0.58+50*0.53;
	printf("cost= %.2f",y);
    if(number<0)
    printf("Invalid Value!");
}