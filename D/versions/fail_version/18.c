#include<stdio.h>
#include<math.h>
int main ()
{
 float a,b,c,s,area,perimeter;
 scanf("%f,%f,%f",&a,&b,&c);
 s=(a+b+c)/2;
 if((a+b>c)&&(fabs(a-b)<c)||(a+c>b)&&(fabs(a-c)<b)||(b+c>a)&&(fabs(b-c)<a))
 {
  area=sqrt((s*(s-a)*(s-b)*(s-c)));
  perimeter=a+b+c;
  printf("area=%.2f;perimeter=%.2f",area,perimeter);
  }
 else
 printf("These sides do not correspond to a valid triangle");
 return 0;
 }