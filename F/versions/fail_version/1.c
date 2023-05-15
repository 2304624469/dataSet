#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	double sum = 1;
	int i = 0;
	for (i = 1; i <=n; i++)
	{
		int add = 1;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			add *= j;
		}
		sum += 1.0 / add;
	}
	printf("%.8lf", sum);
	return 0;
}