#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
float area,perimeter,s;
scanf("%d %d %d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(a+c>b))
   {s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("area=%.2f;perimeter=%.2f",area,perimeter);}
else
printf("These sides do not correspond to a valid triangle");
return 0;
}