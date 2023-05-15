#include<stdio.h>
int main()
{ 
float cost=0,number=0;
scanf("%f",&number);
if(number<=50)
{
cost=0.53*number;
    printf("cost= %.2f\n",cost);
    }
if(number>50)
    {
cost=0.53*50+(number-50)*0.58;
    printf("cost= %.2f\n",cost);
    }
if(number<0)
printf("Invalid Value!");
return 0;
}