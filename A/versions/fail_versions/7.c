#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if (score>100||score<0)
	printf("分数不得超出[0, 100]区间");
		if(score>=90)
		printf("A");
		else if(score>=80)
			printf("B");
			else if(score>=70)
				printf("C");
				else if(score>=60)
				printf("D");
					else
					printf("E");			
	return 0;
}