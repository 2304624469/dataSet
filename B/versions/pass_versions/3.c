#include<stdio.h>
int main()
{
    double number=0.0;
     scanf("%lf",&number);
    if(number<0)
    {
        printf("Invalid Value!");    
    }
    else if(number<=50)
    {
        printf("cost = %.2lf\n",0.53*number);
    }
    else
    {
        printf("cost = %.2lf\n",0.53*50+(number-50)*0.58);
    }
 return 0;
}