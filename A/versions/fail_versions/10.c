#include<stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	if((score>100)||(score<0)) 
	{
		printf("你的分数不能超出[0,100]区间\n");
		scanf("%f",&score);
	}
	if(score>=90&&score<=100)
	printf("A");
	else if(score>=80&&score<90)
	printf("B");
	else if(score>=70&&score<80)
	printf("C");
	else if(score>=60&&score<70)
	printf("D");
	else if(score<60)
	printf("E");
	return 0;
}