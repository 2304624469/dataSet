#include<stdio.h>
#include<math.h>
int main(void)
{
 float number=0;
 float y=0;
 float a=0;
 a=0.53;
 scanf("%f",&number);
 if(number<=50){
    if(number<0)
    printf("Invalid Value!");
    else{ 
    y=number*a;}}
else{ 
    y=50*a+(number-50)*0.58;}
    printf("cost= %.2f",y);
    return 0;
    }