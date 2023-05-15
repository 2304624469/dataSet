#include<stdio.h>
#include<math.h>
int main(){
 float a,b,c,y,m,n,p,q;
 scanf("%f %f %f",&a,&b,&c);
 if(a==0&&b==0&&c==0)
 printf("Zero Equation");
 else if(a==0&&b==0)
 printf("Not An Equation");
 else if(a==0)
 printf("%0.2f",-c/b);
 else{
  y=sqrt(b*b-4*a*c);
  m=(-b-y)/(2.0*a);
  n=(-b+y)/(2.0*a);
  p=-b/(2.0*a);
  q=-y/(2.0*a);
  if(y>0)
  printf("%0.2f\n%0.2f\n",n,m);
  else if(y==0)
  printf("%0.2f",m);
  else{
  printf("%0.2f+%0.2fi\n",p,q);
  printf("%0.2f-%0.2fi\n",p,q);}
 }
  return 0;
}