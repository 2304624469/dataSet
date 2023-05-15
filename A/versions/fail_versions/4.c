#include<stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if(score>100||score<0)
	printf("分数不得超过[0,100]区间\n");
	else if(score>89)
	     printf("A");
	else if(score>79)
	     printf("B");
    else if(score>69)
	     printf("C");
	else if(score>59)
	     printf("D");
	else
	     printf("E");	
}