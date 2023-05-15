#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	{
		d=b*b-4*a*c;
		if(d>0)
		{
			printf("%.2f\n",(-b+sqrt(d))/(2*a));
		    printf("%.2f\n",(-b-sqrt(d))/(2*a));
		}
		else if(d==0)
		{
			printf("%.2f",-b/(2*a));
		}
		else
		{
			if(a>0)
			{
			    printf("%.2f+%.2fi\n",-b/(2*a),sqrt(-d)/(2*a));
	 	        printf("%.2f-%.2fi\n",-b/(2*a),sqrt(-d)/(2*a));
	 	    }
	 	    if(a<0)
	 	    {
	 	    	printf("%.2f+%.2fi\n",-b/(2*a),-1*(sqrt(-d)/(2*a)));
	 	        printf("%.2f-%.2fi\n",-b/(2*a),-1*(sqrt(-d)/(2*a)));
			 }
		}
	}
	else
	{
		if(b!=0)
		{
			printf("%.2f\n",-c/b);
		}
		else
		{
			if(c==0)
			    printf("Zero Equation");
			else
			    printf("Not An Equation");
		}
	}
	return 0;
}