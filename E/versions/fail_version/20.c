#include<stdio.h>
#include<math.h>
#include<complex.h>
int main()
{
float a,b,c,i,n;
scanf("%f %f %f",&a,&b,&c);
n=b*b-4*a*c;
if(n>0&&a!=0)
{
printf("%.2f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
printf("%.2f\n",(-b-sqrt(b*b-4*a*c))/(2*a));
}
else if(n<0&&a!=0)
{
printf("%.2fi\n",(-b-sqrt(4*a*c-b*b)*i)/(2*a));
printf("%.2fi\n",(-b+sqrt(4*a*c-b*b)*i)/(2*a));
}
else if(n==0)
{
printf("%.2f",(-b+sqrt(b*b-4*a*c))/(2*a));
}
else if(a==0&&b==0&&c==0)
{
printf("Zero Equation");
}
else if(a==0&&b==0&&c!=0)
{
printf("Not An Equation");
}
return 0;
}