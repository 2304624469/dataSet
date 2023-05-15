#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	s=(b*b*1.0-4.0*a*c)*1.0;
	x1=(-b+pow(s,0.5))/2.0*a*1.0;
	x2=(-b-pow(s,0.5))/2.0*a*1.0;
	if(s>0&&a!=0)
	{
		if(x1>x2){
			printf("%.2f\n%.2f",x1,x2);
		}
		else{
			printf("%.2f\n%.2f",x2,x1);
		}
		}
	else if(a==0&&b==0&&c==0)
	{
		printf("Zero Equation");
	}
	else if(a==0&&b==0&&c!=0)
	{
		printf("Not An Equation");
	}
	else if(s==0)
	{
		printf("%.2f",-b/(2.0*a)*1.0);
	}
	else if(s<0&&a!=0)\
	{
		if(-b/(2*a)!=0)
		{
			printf("%.2f+%.2fi\n",-b/(2*a)*1.0,1.0*sqrt(-s)/(2.0*a));
			printf("%.2f-%.2fi\n",-b/(2*a)*1.0,1.0*(sqrt(-s))/(2.0*a));
		}
		else{
			printf("0.00+%.2fi\n",1.0*sqrt(-s)/(2.0*a));
			printf("0.00-%.2fi\n",1.0*sqrt(-s)/(2.0*a));
		}
	}else{
		printf("%.2f",(c/b)*(-1.0));
	}
	return 0;	
}