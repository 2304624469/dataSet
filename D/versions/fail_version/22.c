#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double area,perimeter,s;
scanf("%d %d %d",&a,&b,&c);
if(a+b<=c||a+c<=b||b+c<=a)
{
printf("These sides do not correspond to a valid triangle\n");
}
else if(a+b>c&&a+c>b&&b+c>a)
{
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
perimeter=a+b+c;
printf("area=%.2lf;perimeter=%.2lf",area,perimeter);
}
return 0;
}