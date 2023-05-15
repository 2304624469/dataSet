#include<stdio.h>
#include<math.h>
int main(){
int n,i,jie=1;
double f,sum=1.0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
jie=jie*i;
f=1.0/jie;
sum=sum+f;
}
printf("%.8f",sum);
return 0;
}