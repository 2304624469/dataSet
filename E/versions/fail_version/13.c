#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,e,x,x1,x2;
 scanf("%f %f %f",&a,&b,&c);
 d=b*b-(4*a*c);
 if (d>0)
  {if (a==0)
    {x=(-c)/b;
     printf("%.2f",x);
    }
   if(a!=0)
    {x1=((-b)+sqrt(d))/(2*a);
     x2=((-b)-sqrt(d))/(2*a);
     printf("%.2f\n%.2f",x1,x2);
     }
   }
   else if (d==0)
   {if(a==0&&b==0&&c==0)
    printf("Zero Equation");
   else if(a==0&&b==0&&c!=0)
    printf("Not An Equation");
   else
   {x1=(-sqrt(b))/(2*a);
    printf("%.2f",x1);
    }
   }
 else
 {if(a!=0)
  if(b==0)
   {
   x1=sqrt(-d)/(2*a);
   x2=-sqrt(-d)/(2*a);
   printf("0.00+&.2lfi\n 0.00-%.2lfi\n",x1,x2);
  }
  else
  {x1=sqrt(-d)/2*a;
   e=(-b)/(2*a);
   x2=-sqrt(-d)/2*a;
   printf("%.2lf+%.2lfi\n %2lf-%.2lfi\n",e,x1,x2);
  }
  }
  return 0;
  }