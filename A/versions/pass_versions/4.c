#include<stdio.h>
#include<stdio.h>
int main(){
   int score;
   scanf("%d",&score);
   if(score<=100&&score>=0){
     	switch(score/10){
   	 case 10:
   	 	printf("A\n");
   	 	break;
   	 case 9:
   	 	printf("A\n");
   	 	break;
   	 case 8:
   	 	printf("B\n");
   	 	break;
   	 case 7:
   	 	printf("C\n");
   	 	break;
   	 case 6:
   	 	printf("D\n");
   	 	break;
   	 default:
   	        	printf("E\n");}}
   else{  
      printf("分数不得超出[0, 100]区间");}
return 0;}