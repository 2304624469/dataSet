#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c,d,m,n;
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a*c;
  if(a==0&&b==0&&c==0)
    printf("Zero Equation");
  else if(a==0&&b==0&&c!=0)
    printf("Not An Equation");
  else if(a==0)
    printf("%.2f",-c/b);
  else if(d==0)
    printf("%.2f",-b/(2*a));
  else if(d>0){
    m=(-b+sqrt(d))/(2*a);
    n=(-b-sqrt(d))/(2*a);
    if(m>n) printf("%.2f\n%.2f",m,n);
    else    printf("%.2f\n%.2f",n,m);}
  else {
      printf("%.2f+%.2fi\n",-b/(2*a),sqrt(-d)/(2*a));
      printf("%.2f+%.2fi\n",-b/(2*a),sqrt(-d)/(2*a));}
  return 0;}