#include<stdio.h>
int main()
{
    int n,i=0,j=0,fart;
    double sum=1;
    scanf("%d",&n);
    if(n<=1000)
    {
    for(i=1;i<=n;i++)
    {
        fart=1;
        for(j=1;j<=i;j++)
        {
            fart=fart*j;
        }
        sum=sum+1.0/fart;
    }
    printf("%.8f",sum);
    }
    return 0;
}