#include<stdio.h>
#include<math.h>
int main ()
{
float a,b,c;
float area,p,s;
scanf("%f %f %f",&a,&b,&c);
if(a+b<c&&a+c<b&&b+c<a){
p=a+b+c;
s=p/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area = %0.2f;perimeter = %0.2f",area,p);
}
else
{
printf("These sides do not correspond to a valid triangle");
}
return 0;
}