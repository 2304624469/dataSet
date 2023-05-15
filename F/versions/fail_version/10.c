#include<stdio.h>
int main()
{
	double sum=1.0,a=1.0;
	
    int i,n;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		a=a*i;
		sum=sum+1.0/a;
	}
	
	printf("%.8f",sum);
	return 0;
 } 