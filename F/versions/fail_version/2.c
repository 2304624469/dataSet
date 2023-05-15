#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j,b;
double c;
double num=1;
for(i=1;i<=n;i++){
b=1;
for(j=1;j<=i;j++){
b=b*j;}
c=1.0/b;
num=num+c;}
printf("%.8f",num);
return 0;}