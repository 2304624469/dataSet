#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   float area,s,perimeter;
   scanf("%d %d %d",&a,&b,&c);
   s=(a+b+c)/2.0;
   if(a+b>c && b+c>a && a+c>b)
   {
   area=sqrt((s-a)*(s-b)*(s-c));
   perimeter=a+b+c;
   printf ("area = %.2f;perimeter = %.2f",area,perimeter);
   }
   else
   printf("These sides do not correspond to a valid triangle");
   return 0;
}