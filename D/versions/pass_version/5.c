#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;double s,area,perimeter;
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2.0;
if(c>=a+b) 
printf("These sides do not correspond to a valid triangle\n");
else if(b>=a+c) 
printf("These sides do not correspond to a valid triangle\n");
else if(a>=b+c) 
printf("These sides do not correspond to a valid triangle\n");
else {
area=sqrt(s*(s-a)*(s-b)*(s-c));
perimeter=a+b+c;
printf("area=%.2f;perimeter=%.2f",area,perimeter);}
return 0;
}