#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,d,t,x1,x2,y;
scanf("%lf %lf %lf",&a,&b,&c);
y=b*b-4*a*c;
if(y>0){
d=b*b-4*a*c;
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf("%.2f\n%.2f\n",x1,x2);}
else if(a==0&&b==0&&c==0)
printf("Zero Equation");
else if(a==0&&b==0&&c!=0)
printf("Not An Equation");
else if(y==0){
d=b*b-4*a*c;
x1=(-b+sqrt(d)/2*a);
printf("%.2f",x1); }
else if(y<0){
x1=(-b)/(2*a);
x2=sqrt(4*a*c-b*b)/(2*a);
printf("%.2lf+%.2fi\n%.2lf-%.2fi",x1,x2,x1,x2);}
}