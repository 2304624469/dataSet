#include<stdio.h>
#include<math.h>
int main()
{
float number;
scanf("%f",&number);
if(number<0)
printf("Invalid Value!");
else if(number<=50)
printf("cost= %.f",0.53*number);
else{
printf("cost= %.f",0.53 * 50 + (number - 50) * 0.58);
}
return 0;
}