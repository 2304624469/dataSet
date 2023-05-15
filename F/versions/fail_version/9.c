#include<stdio.h>
int main()
{
 double sum=1.00;
int t=1.0, i=1.0;
int n;
scanf("%d",&n);
for(i=1.0;i<=n;i++){
t=t*i;
 double s=1.0/(t*1.0);
sum=sum+s;}
printf("%.8f",sum);
return 0;
}