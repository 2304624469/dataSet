#include <stdio.h>
#include <math.h>
    int main()
    {
    float a,b,c,s,area,perimeter;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    if(a+b>c||a+c>b||b+c>a)
    {
    printf("area = %.2f; ",sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("perimeter = %.2f",a+b+c);
    }
    else if(a+b<=c||a+c<=b||b+c<=a)
    {
    printf("These sides do not correspond to a valid triangle");
    }
    return 0;
    }