#include<stdio.h>
int main()
{
   float number,b;
   scanf("%f",&number);
   if(number<0)
     printf("Invalid Value!");
   else if(number<=50)
    {
     b=0.53*number;
     printf("cost=%.2f",b);
     }
   else
     {
      b=0.53*50+0.58*(number-50);
      printf("cost=%.2f",b);
     }
   return 0;
}