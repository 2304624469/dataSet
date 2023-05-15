#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    float s;
    double area;
    double perimeter;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        s=(a+b+c)/2.0;
        perimeter=a+b+c;
        area=s*(s-a)*(s-b)*(s-c);
        printf("area=%.2lf;perimeter=%.2lf",sqrt(area),perimeter);
    }
    else
        printf("These sides do not correspond to a valid triangle");
    return 0;
}