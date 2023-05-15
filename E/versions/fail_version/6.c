#include<stdio.h>
#include<math.h> 
int main()
{
	double a,b,c,t;
	double x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
    t=b*b-4*a*c;
	if(a!=0&&t>0)
	{
       x1=(-b+sqrt(t))/(2*a);
	   x2=(-b-sqrt(t))/(2*a);
	   printf("%.2f\n%.2f",x1,x2);	    
	}
	else if(a!=0&&t<0)
	{
	   x1=(-b)/(2*a);
	   x2=sqrt(-t)/(2*a);
	   if(x1==0)
	     printf("0.00+%.2fi\n0.00-%.2fi",x2,x2);
	   else
	     printf("%.2f+%.2fi\n%.2f-%.2fi",x1,x2,x1,x2);	 	 
	}
    else if(a==0&&b==0&&c==0)	  
      printf("Zero Equation");
    else if(a==0&&b==0&&c!=0)
	  printf("Not An Equation");  
return 0;      	    
}