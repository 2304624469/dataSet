#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if(score<0||score>100)
	 printf("“分数不得超出[0,100]区间”");
    else if(score<60)
	 printf("E");
	else if(score<70)
	 printf("D");
	else if(score<80)
	 printf("C");
	else if(score<90)
	 printf("B");
	else if(score<=100)
	 printf("A");	
	return 0;
}