#include<stdio.h>
int main()
{
float number,c;
scanf("%f",&number);
if(number>50)
{
c=26.5+0.58*(number-50);
}
else if(number<0)
{
    printf("Invalid Value!");
    return 0;
}
else
{
c=0.53*number;
}
printf("cost = %.2f",c);
return 0;
}