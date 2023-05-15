#include<stdio.h>
int main(){
int n,a,t,c=1,d=0;
float b=0.0;
float h,m;
scanf("%d",&n);
for (a=1;a<=n;a++){
d++;c*=d;
h=1.0/c;
for(t=1;t<=n;t++){
b+=h;}}
m=1.0+b;
printf("%.8f",m);
return 0;}