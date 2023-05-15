#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if ((a+b)>c&&(b+c)>a&&(c+a)>b)
{
	float area,perimeter,s;
	s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %.2f;",area);
	printf(" perimeter = %.2f",s*2);   
}
else
    printf("These sides do not correspond to a valid triangle");
    return 0;
}
