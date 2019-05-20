#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int balance = 10000;    // 교통카드 잔액
	int age;

	scanf("%d", &age);

	if (age >= 19)
		balance = balance - 1200;
	else if (age <= 18 && age >= 13)
		balance = balance - 720;
	else if (age <= 12 && age >= 7)
		balance = balance - 450;
	else
		balance = balance - 0;

		printf("%d\n", balance);

	return 0;
}