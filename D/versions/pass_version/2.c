#include<stdio.h>
#include<math.h>
int main()
{    
    double a,b,c;
    double s=0.0,area=0.0;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b<=c)||(a+c<=b)||(b+c)<=a)
    {
        printf("These sides do not correspond to a valid triangle\n");
        return 0;
    }
    s=0.5*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %.2lf; perimeter = %.2lf",area,a+b+c);
    return 0;
}