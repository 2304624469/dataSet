#include<stdio.h>
#include<math.h>
int main ()
{
	double a,b,c,d,e,f;
	scanf("%lf %lf %lf",&a,&b,&c);
	d=(b*b-4*a*c);
	e=1.0*(-b+sqrt(d))/(2*a);
	f=1.0*(-b-sqrt(d))/(2*a);
	if(a!=0&&b!=0&&c!=0&&d==0)
	{
	printf("%.2lf",e);
	}
	else if(a==0&&b==0&&c==0)
	{printf("Zero Equation");
	}
	else if(a==0&&b!=0)
	printf("%.2f",(-c)/b);
	else if(a==0&&b==0&&c!=0)
	{printf("Not An Equation");
	}
	else if(a!=0&&b!=0&&c!=0&&d<0)
	{
	printf("%.2f+%.2fi\n",-b/(2*a),sqrt(-(b*b-4*a*c))/2*a);
	printf("%.2f-%.2fi",-b/(2*a),sqrt(-(b*b-4*a*c))/2*a);
	}else if(a!=0&&b!=0&&c!=0&&d>0) 
	{
        	printf("%.2f\n%.2f",e,f);
	}
	return 0;
}