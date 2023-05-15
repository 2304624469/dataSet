#include<stdio.h>
int main()
{
int n,m;
double answer,t;
scanf("%d",&n);
answer=1.0;
for(m=1;m<=n;m=m+1)
{t=m*(m+1);
answer=answer+2/t;}
printf("%.8lf",answer);
return 0;
}