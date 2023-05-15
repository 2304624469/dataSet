#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	double area;
	double perimeter;
	float s;
	scanf("%d %d %d",&a,&b,&c);
		if(a+b>c&&a+c>b&&b+c>a)
		{
			s=(a+b+c)/2.0;
			area=s*(s-a)*(s-b)*(s-c);
			perimeter=a+b+c;
			printf("area=%.2lf; perimeter=%.2lf",area,perimeter);
		}
		else
			printf("These sides do not correspond to a valid triangle");
}