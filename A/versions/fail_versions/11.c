#include<stdio.h>
int main(){
int score;
scanf("%d",&score);
   if(score<0&&score>100)
  printf("分数不得超出[0,100]区间");
   else
   if(score>89)
  printf("A");
   else
   if(score>79)
  printf("B");
   else
   if(score>69)
  printf("C");
   else
   if(score>59)
  printf("D");
   else
   if(score<60)
   printf("E");
   else
  return 0;
  }