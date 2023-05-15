#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0&&b==0&&c==0)
		printf("Zero Equation");
	if(a==0&&b==0&&c!=0)
		printf("Not An Equation");
	else{
		float deta=b*b-4*a*c;
		if(deta>0){
			float x1,x2;
			x1=(-b+sqrt(deta))/(2*a);
			x2=(-b-sqrt(deta))/(2*a);
			printf("%.2f\n%.2f",x1,x2);
		}
		if(deta<0){
			float x,y;
			x=(-b)/(2*a); y=sqrt(4*a*c-b*b)/(2*a);
			printf("%.2f+%.2fi\n%.2f-%.2fi",x,y,x,y);
		}
		if(deta==0){
			float x;
			x=-b/(2*a);
			printf("%.2f",x);
		}
	}
	return 0;
}