#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s;            
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
if (a+b<=c&&a+c<=b&&b+c<=a)
 printf("These sides do not correspond to a valid triangle");
 else
 printf("area = %.2f; perimeter = %.2f",pow(s*(s-a)*(s-b)*(s-c),0.5),a+b+c);
  return 0;
  }