#include<stdio.h>
int main()
{
   float score;
   scanf("%f",&score);
   if(score<0&&score>100)
    {printf("分数不得超出[0,100]区间");
    scanf("%f",&score);}
   else
   {if(score>=90.0)
   printf("A");
   else if(score>=80.0)
   printf("B");
   else if(score>=70.0)
   printf("C");
   else if(score>=60.0)
   printf("D");
   else if(score<60)
   printf("E");}
   return 0;
   }