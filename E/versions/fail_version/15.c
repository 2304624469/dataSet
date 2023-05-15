#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,d,e,x1,x2;
scanf("%lf %lf %lf",&a,&b,&c);
d=b*b-4*a*c;
if(d>0){
if(a==0)
x1=-c/b;
printf("%.2lf\n",x1);
if(a!=0){
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("%.2lf\n%.2lf\n",x1,x2);}}
else if(d==0){ 
if(a==0&&b==0&&c==0)
printf("Zero Equation\n");
else if(a==0&&b==0&&c!=0)
printf("Not An Equation\n");
else{
x1=-b/(2*a);
printf("%.2lf\n",x1);}}
else{ 
    if(a!=0)
    if(b==0){
    x1=sqrt(-d)/(2*a);
    x2=sqrt(-d)/(2*a);
    printf("0.00+&.2lfi\n0.00-%.2lfi\n",x1,x2);
    }
    else{
    x1=sqrt(-d)/(2*a);
    e=-b/(2*a);
    x2=sqrt(-d)/(2*a);
    printf("%.2lf+%.2lfi\n%.2lf-%.2lfi\n",e,x1,e,x2);}}
    return 0;}