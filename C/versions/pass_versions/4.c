#include<stdio.h>
int judge(int year){
	if((year%4==0&&year/100!=0)||(year%400==0))
		return 1;
	return 0; 
} 
int main()
{
	int n;
	scanf("%d",&n);
	if(judge(n))
		printf("%d是闰年\n",n);
	else{
		if(n>=0)
		printf("%d不是闰年\n",n);
		else
		printf("非法输入");
	      }
	return 0;
}