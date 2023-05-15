#include<stdio.h>
#include<math.h>
int main(){
 float a,b,c;
 scanf("%f %f %f",&a,&b,&c);
 float d,e,f;
 d=b*b-4*a*c;
 e=((-b)+sqrt(d))/(2*a);
 f=((-b)-sqrt(d))/(2*a);
 if(a==0&&b==0&&c==0)
  printf("Zero Equation");
 if(a==0&&b==0&&c!=0)
  printf("Not An Equation");
 if(a==0&&b!=0&&c!=0)
  printf("%.2f",(-c)/b); 
 else{
  if(d==0)
  printf("%.2f",e);
  if(d>0){
  printf("%.2f\n",e);
  printf("%.2f",f);}
  if(d<0){
  float g=(-b)/(2*a);
  float h=sqrt(-d)/(2*a);
  printf("%.2f+%.2fi\n",g,h);
  printf("%.2f-%.2fi\n",g,h);}  } 
  return 0;
}