#include<stdio.h>
int main(void) {
	double number=0;
	scanf("%lf", &number);
	if(number < 0)
		printf("Invalid Value!\n");
	if(number <= 50)
		printf("cost= %.2f\n", 0.58 * number);
	else
		printf("cost= %.2f\n", 0.53 * 50 + (number - 50) * 0.58);
	return 0;
}