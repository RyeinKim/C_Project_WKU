#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, num5, num6;

	scanf("%d", &num1);

	num2 = num1 % 10;
	
	printf("%d ", num2);

	num1 /= 10;
	num3 = num1 % 10;

	printf("%d ", num3);

	num1 /= 10;
	num4 = num1 % 10;

	printf("%d ", num4);

	num1 /= 10;
	num5 = num1 % 10;

	printf("%d ", num5);

	num1 /= 10;
	num6 = num1 % 10;

	printf("%d ", num6);

	return 0;
}