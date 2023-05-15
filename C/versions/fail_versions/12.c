#include<stdio.h>
int main() 
{
int year=0;
scanf ("%d",& year) ;
if (year<0) 
printf ("非法输入") ;
if (year%4==0) 
printf ("%d是闰年",year) ;
if (year%4!=0)
printf ("%d不是闰年",year) ;
return 0;
}