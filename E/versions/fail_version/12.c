#include <stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2,disc,re,im;
	scanf("%lf %lf %lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (a == 0 && b == 0 && c ==0)
		printf("Zero Equation");
   else if (a == 0 && b == 0 && c != 0)
		printf("Not An Equation");
	else
	{
		if (a == 0)
		{
			x1 = -c / b;
			printf("%.2f", x1);
		}
		else
		{
			if (disc > 0)
			{
				x1 = (-b + sqrt(disc)) / (a * 2);
				x2 = (-b - sqrt(disc)) / (a * 2);
				printf("%.2f\n%.2f", x1, x2);
			}
			else if (disc = 0)
			{
				x1 = (-b) / (2 * a);
				printf("%.2f", x1);
			}
			else if(disc<0)
			{ 
				re = -b / (2 * a);
				im = sqrt(-disc) / (a * 2);
				printf("%.2f+%.2fi\n", re, im);
				printf("%.2f-%.2fi", re, im);
			}
		}
	}
	return 0;
}