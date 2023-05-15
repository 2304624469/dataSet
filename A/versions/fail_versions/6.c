#include<stdio.h>
int main()
{
    int score;
	scanf("%d", &score);	
	score=score/10;
	if(0<=score<=100){
	switch(score)
	{
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
			printf("E");
	}}
	else{
	printf("分数不得超出[0,100]区间");} 
	return 0;
}
