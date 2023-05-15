#include<stdio.h>
#include<math.h>
int main()
{  int a,b ,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a+b<=c||a+c<=b||b+c<=a)
   {printf("These sides do not correspond to a valid triangle");
   }
   double area,peri,s;
   s=(a+b+c)/2.0;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   peri=a+b+c;
   {printf("area = %.2f; perimeter = %.2f",area,peri);
   }
   return 0;
   }