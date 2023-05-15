#include<stdio.h>
#include<math.h>
int main()
{ 
   int a,b,c;
   float area,s;
   scanf("%d %d %d",&a,&b,&c);
   s=(a+b+c)/2.0;
   if(a+b>c&&a+c>b&&b+c>a)
   {
     area = pow(s*(s-a)*(s-b)*(s-c),0.5);
      printf("area = %.2f；perimter = %.2f",area,s*2);
   }
      else 
         printf("These sides do not correspond to a valid triangle");
   return 0;
   }