#include<stdio.h>
#include<math.h>
int main()
{
   int year=0; 
   scanf("%d",&year);
    if(year<0)
       printf("no real number solution");
    else if((year%100!=0 && year%4==0) || (year%400)==0)
        printf("%d是闰年",year);
    else
        printf("%d不是闰年",year);
     
    return 0;

}