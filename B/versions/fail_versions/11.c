#include<stdio.h>
#include<math.h>
int main()
{
float number=0;
scanf("%f",&number);
if(number<0)
printf("Invalid Value!");
if(number<=50)
printf("cost= %.2f",0.58*number);
else{
printf("cost= %.2f",0.53 * 50 + (number - 50) * 0.58);
}
return 0;
}