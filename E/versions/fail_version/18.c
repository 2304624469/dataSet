#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,t;
scanf("%f %f %f",&a,&b,&c);
t=b*b-4*a*c;
if(t>0){
if(a!=0){
printf("%.2f\n",(sqrt(t)-b)/(2*a));
printf("%.2f",(-sqrt(t)-b)/(2*a));}
else{
printf("%.2f",-c/b);}}
else if(t<0){
printf("%.2f\n",-b/(2*a)+sqrt(-t)*'i'/(2*a));
printf("%.2f",-b/(2*a)-sqrt(-t)*'i'/(2*a));}
else
if(a==0&&b==0&&c==0)
printf("Zero Equation");
else if(a==0&&b==0&&c!=0)
printf("Not An Equation");
else
printf("%.2f",-b/(2*a));
  return 0;
}