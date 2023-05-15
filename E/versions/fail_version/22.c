#include<stdio.h>
#include<math.h>
#define FLOAT_EPS 1e-6
int main()
{
    float a,b,c;
    float d,e,s,m,n;
    char i;
    scanf("%f %f %f",&a,&b,&c);
    s=b*b-4*a*c;
    if(a==0&&b!=0&&c!=0)
       {    
           d=(-c)/b;
           printf("%.2f",d);
       }
    if(s>0)
       {  e=-b/(2*a)-(sqrt(b*b-4*a*c))/(2*a);
         d=-b/(2*a)+(sqrt(b*b-4*a*c))/(2*a);
        if(e!=d&&s>0)
          printf("%.2f\n%.2f",d,e);
       }
    if(a==0&&b==0&&c==0)
          printf("Zero Equation");
    if(a==0&&b==0&&c!=0)
          printf("Not An Equation");
    if(s<0)
    {
    	m=-b/(2*a);
    	n=(sqrt(-b*b+4*a*c))/(2*a);
		printf("%.2f+%.2fi\n",m,n);
		printf("%.2f-%.2fi\n",m,n);
	}
    return 0;
}