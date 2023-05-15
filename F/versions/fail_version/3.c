#include<stdio.h>
int main()
{
int n,i,t,j;
double sum;
scanf("%d",&n);
for(i=1,sum=1;i<=n;i++){
for(t=1,j=1;t<=i;t++){
    j=j*t;}
sum+=1.0/j;
t=1;}
printf("%.8f",sum);
return 0;
}