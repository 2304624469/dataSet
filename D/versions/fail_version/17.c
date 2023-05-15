#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
float s,area;
scanf("%d %d %d",&a,&b,&c);
if(c<(a+b)&&b<(a+c)&&a<(b+c))
{s=(a+b+c)/2;
area=s*(s-a)*(s-b)*(s-c);
area=sqrt(area);
printf("area = %.2f; perimeter = %.2f",area,2*s);
}
else
  printf("These sides do not correspond to a valid triangle");
  }