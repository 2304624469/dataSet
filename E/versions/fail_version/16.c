#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,e,g,one,two;
scanf("%f %f %f",&a,&b,&c);
one=(-b+sqrt(b*b-4*a*c))/2*a;
two=(-b-sqrt(b*b-4*a*c))/2*a;
d=-b/2*a;
g=(-c)/b;
e=b*b-4*a*c;
if(e>0&&a>0)
{printf("%.2f\n",one);
printf("%.2f\n",two);}
else if(e=0)
{printf("%.2f",d);}
else if(a==0&&b!=0)
{printf("%.2f",g);}
else if(a==0&&b==0&&c==0)
{printf("Zero Equation");}
else if(a==0&&b==0&&c!=0)
{printf("Not An Equation");}}