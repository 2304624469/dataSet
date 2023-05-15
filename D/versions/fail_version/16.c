#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double s,d,e;
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2;
d=sqrt(s*(s-a)*(s-b)*(s-c));
e=a+b+c;
if((a+b>c)&&(a+c>b)&&(b+c>a))
printf("area = %.2lf; perimeter = %.2lf",d,e);
else
printf("These sides do not correspond to a valid triangle");
return 0;
}