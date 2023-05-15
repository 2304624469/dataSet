#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,x1,x2,deta,t;
scanf("%f %f %f",&a,&b,&c);
deta=b*b-4*a*c;
if(deta>0)
{x1=(-b+sqrt(deta))/(2*a);
x2=(-b-sqrt(deta))/(2*a);
  if(x1<x2)
  {t=x1;
   x1=x2;
   x2=t;
  printf("%.2f\n",x1);
  printf("%.2f\n",x2);
  }  
  else
  {
  printf("%.2f\n",x1);
  printf("%.2f\n",x2);
  }
 }
 else if(deta<=1e-6)
 {x1=-b/(2*a);
 printf("%.2f",x1);
 }
else if(a<=1e-6&&b<=1e-6&&c<=1e-6)
 printf("Zero Equation");
else if(a<=1e-6&&b<=1e-6&&c>1e-6)
 printf("Not An Equation");
 return 0;
 }