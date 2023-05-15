#include<stdio.h>
int main()
{
    int n;
    double sum=1;
    scanf("%d",&n);
    int i,j;
    if(n<=1000)
    {
    for(i=1;i<=n;i++)
    {
        double fart=1;
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