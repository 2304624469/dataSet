#include<stdio.h>
int main(){
   float score;
   scanf("%f",&score);
   if(score>100||score<0){
   printf("分数不得超出[0, 100]区间");}
   else{
   	if(score/10>=9)
	printf("A");
	else if(score/10>=8)
	printf("B");
	else if(score/10>=7)
	printf("C");
	else if(score/10>=6)
	printf("D");
	else {
	printf("E");}}
return 0;}