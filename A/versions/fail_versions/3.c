#include<stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    if(score<=100&&score>=0){
    printf("%d",score);
    if(score>=90)
     printf("A\n");
    else if(score>=80)
           printf("B\n");
    else if(score>=70)
           printf("C\n");
    else if(score>=60)
           printf("D\n");
    else{
           printf("E\n");}}
    else{
           printf("分数不得超出[0, 100]区间");}
          return 0;  
}