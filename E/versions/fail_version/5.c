#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x,y,i;
scanf("%f%f%f",&a,&b,&c);
if(a!=0)
{
if(b*b-4*a*c>=0)
{
x=(-b)/(2*a)+sqrt(b*b-4*a*c)/(2*a);
y=(-b)/(2*a)-sqrt(b*b-4*a*c)/(2*a);
if(x>y)
printf("%.2f\n%.2f",x,y);
if(x<y)
printf("%.2f\n%.2f",y,x);
if(x==y)
printf("%.2f",y);
}
if(b*b-4*a*c<0)
{
x=(-b)/(2*a)+sqrt(b*b-4*a*c)/(2*a)*i;
y=(-b)/(2*a)-sqrt(b*b-4*a*c)/(2*a)*i;
printf("%.2f\n%.2f",x,y);
}
}
else if(a==b==c==0)
printf("Zero Equation");
else if(a==b&&b==0&&c!=0)
printf("Not An Equation");
return 0;
}
