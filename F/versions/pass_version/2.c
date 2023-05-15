#include<stdio.h>
int main()
{
    int n,i;
    double sum=1.0,m=1.0;
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	m = m* (1.0/i);
	sum += m;
    	}	
	printf("%.8lf",sum);	
	return 0;
}