#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,x1,x2;
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
   if((a==0)&&(d==0)){
       if(c==0)
       printf("Zero Equation");
       else
       printf("Not An Equation");}
   else if((a!=0)&&(d>0))
      {x1=(-b+sqrt(d))/(a*2);
       x2=(-b-sqrt(d))/(a*2);
       printf("%.2f\n%.2f",x1,x2);}
   else if((a!=0)&&(d<0))
       printf("%.2f+%.2fi\n%.2f-%.2fi",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
   else if((a!=0)&&(d==0))
     { printf("%.2f",(-b+sqrt(d))/(a*2));}
   return 0;
   }