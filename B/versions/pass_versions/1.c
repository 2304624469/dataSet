#include<stdio.h>
#include<stdlib.h>
int main()
{
  double number,b;
  scanf("%lf",&number);
  if(number>=0&&number<=50){
      b=0.53*number;
      printf("cost= %.2f\n",b);}
  else if(number>50){
      b=50*0.53+0.58*(number-50);
      printf("cost= %.2f\n",b);}
  else{
      printf("Invalid Value!\n");}
  return 0;
}