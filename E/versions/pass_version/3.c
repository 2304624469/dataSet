#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d;
   scanf("%f %f %f",&a,&b,&c);
   d=b*b-4*a*c;
   if(a==0&&b==0&&c==0)
     printf("Zero Equation");
   else if(a==0&&b==0)
     printf("Not An Equation");
   else if(a==0)
     printf("%.2f",-c/b);
   else if(d==0)
     printf("%.2f",-b/(2*a));
   else if(d>0)
     printf("%.2f\n%.2f",(-b+pow(d,0.5))/(2*a),(-b-pow(d,0.5))/(2*a));
   else
     printf("%.2f+%.2fi\n%.2f-%.2fi",-b/(2*a),pow(-d,0.5)/(2*a),-b/(2*a),pow(-d,0.5)/(2*a));
   return 0;
}