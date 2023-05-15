#include<stdio.h>
int main()
{
    int n;
    double item;
    int i;
    double sum=0;
    double jie=1;
    int a=1;
    int g;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    jie=a*jie;
    a++;
    item=1/jie;
    sum=item+sum;}
    sum=sum+1;
    printf("%.8Lf",sum);
    return 0;}