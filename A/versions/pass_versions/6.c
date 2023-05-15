#include<stdio.h>
int main(){
     int score;
     scanf("%d",&score);
     if(score<0  || score>=101){
        printf("分数不得超出[0, 100]区间");}
   else{  
      switch(score/10){   
       case 10:
          printf("A");
          break;
        case 9:
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
        default:
            printf("E");}}
return 0;}