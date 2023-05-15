#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float b;
    float c;
    float z;
    float y;
    float w;
    float m;
    float s;
    float x;
    float p;
    scanf ("%f",&a);
    scanf ("%f",&b);
    scanf ("%f",&c);
    p=((b*b)-(4*a*c));
    w=sqrt(b*b-(4*a*c));
    m=sqrt(-(b*b-(4*a*c)));
    if (p==0){
        z=-(b/(2*a));
        printf("%.2f",z);
    }
    else if (p>0) {
        z=((-b)+w)/(2*a);
        y=((-b)-w)/(2*a);
        printf("%.2f\n%.2f",z,y);
    }  
    else if (p<0){
        s=(-b)/(2*a);
        x=m/(2*a);
        printf("%.2f+%fi\n%.2f-%fi",s,x,s,x);
    }
    else if(a=b=c==0){
        printf("Zero Equation");
    }
    else if(a=b==0&&c!=0){
        printf("Not An Equation");
    }
	return 0;
}