#include<stdio.h>
#include<math.h>
int main()
{ 
  float a,b,c,s,e,f,d;
  scanf("%f %f %f",&a,&b,&c);
  s=(a+b+c)/2;
  if(a>b+c&&b>a+c&&c>a+b)
  {e=s*(s-a)*(s-b)*(s-c);
  d=sqrt(e);
  f=a+b+c;
  printf("area = %.2f; perimeter = %.2f",d,f);
  }
  else
  printf("These sides do not correspond to a valid triangle");
  return 0;
  }