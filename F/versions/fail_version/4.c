#include<stdio.h>
int main()
{
	int n,j,c=1;
	double sum=1;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		c=c*j;
		sum+=1.0/c; 
	}
	printf("%.8f",sum);
	return 0;
}