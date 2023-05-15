#include<stdio.h>
int main()
{int n;
double b=1.0,sum=1.0;
int i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   b=1.0;
	for(j=1;j<=i;j++)
	{
		b=b*j;
	}
	sum+=1/b;
}
printf("%.8lf",sum);
return 0;
}