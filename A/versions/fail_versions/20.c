#include<stdio.h>
int main(){
   int score,a;
   scanf("%d",&score);
   a=score/10;
   switch(a){
   case 10:
   case 9:printf("A");break;
   case 8:printf("B");break;
   case 7:printf("C");break;
   case 6:printf("D");break;
   case 5:
   case 4:
   case 3:
   case 2:
   case 1:
   case 0:printf("F");break;
   default:printf("分数不得超出[0,100]区间");
   }
    return 0;
}