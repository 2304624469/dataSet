#include<stdio.h>
int main()
{
   int score;
   scanf("%d",&score);
   if(score<=100 && score>=90)
   printf("A");
   else if(score<=80 && score>=89)
   printf("B");
   else if(score<=70 && score>=79) 
   printf("C");
   else if(score<=60 && score>=69)
   printf("D");
   else 
   printf("E");
   return 0;
}