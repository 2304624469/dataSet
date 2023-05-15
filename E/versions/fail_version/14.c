#include<stdio.h>
#include<math.h>
#include<complex.h>
int main()
{
float a,b,c,i,n,x,y;
scanf("%f %f %f",&a,&b,&c);
n=b*b-4*a*c;
x=(-b+sqrt(b*b-4*a*c))/(2*a);
y=(-b-sqrt(b*b-4*a*c))/(2*a);
if(n>0&&a!=0)
{
if(x>y)
{
printf("%.2f\n",x);
printf("%.2f\n",y);
}
else 
{
printf("%.2f\n",y);
printf("%.2f\n",x);
}
}
else if(n>0&&a==0){
printf("%.2f\n",(-c)/b);
}
else if(a==0&&b==0&&c!=0)
{
printf("Not An Equation");
}
else if(a==0&&b==0&&c==0)
{
printf("Zero Equation");
}
else if(n<0&&a!=0)
{
printf("%.2fi\n",(-b-sqrt(n)*i)/(2*a));
printf("%.2fi\n",(-b+sqrt(n)*i)/(2*a));
}
else if(n==0)
{
printf("%.2f",(-b+sqrt(b*b-4*a*c))/(2*a));
}
return 0;
}