#include<stdio.h>
int main()
{
int n,i;
float k,j;
i=1;
j=1.0;
k=0;
scanf("%d",&n);
while(i<=n){
j*=i;
k+=1.0/j;
++i;}
printf("%.8f",1+k);
}