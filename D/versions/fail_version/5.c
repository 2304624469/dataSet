#include<stdio.h>
#include<math.h>
int main(void)
{
 int a;
 int b;
 int c;
 double s;
 double z;
 float area;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 s=(a+b+c)/2.0;  //Bug Ó¦¸ÄÎª s=(a+b+c)/2.0 
 z=a+b+c;
 if(a+b>c&&b+c>a&&a+c>b){
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("area=%.2f;perimeter=%.2f",area,z);}
 else
 printf("These sides do not correspond to a valid triangle");
 return 0;
}