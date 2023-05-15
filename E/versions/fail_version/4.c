#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d;
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if(a==0 && b==0 && c==0)
printf("Zero Equation");
else if(a==0 && b==0)
printf("Not An Equation");
else if(a==0)
printf("%.2f",-b/c);
else if(d==0)
printf("%.2f",-2*a/b);
else if(d>0){
printf("\n%.2f",(-b+sqrt(d))/(2*a));
printf("\n%.2f",(-b-sqrt(d))/(2*a));}
else{
printf("\n%.2f+%.2fi",(-b/2*a),sqrt(4*a*c-b*b)/(2*a));
printf("\n%.2f-%.2fi",(-b/2*a),sqrt(4*a*c-b*b)/(2*a));}
return 0;
}