#include<stdio.h>
int main()
{
   int score;
   scanf("%d",&score);
   if(score==100)
   printf("A");
   else
   {
    score=score/10.0;
    switch(score)
    {case 9:
    printf("A");
     break;
     case 8:
    printf("B");
    break;
    case 7:
    printf("C");
    break;
    case 6:
    printf("D");
    break;
    defult:
    printf("E");
    }
    return 0;
    }}