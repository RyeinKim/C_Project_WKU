#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int add(int a, int b);
int sub(int c, int d);
int mul(int e, int f);
int dev(int g, int h);

typedef struct calculation
{
	int num1, num2, (*fp[4])(int, int);
	char operation;
}cal;

int main()
{
	cal first, second , function, pointer;

	pointer.fp['+'] = add;
	pointer.fp['-'] = sub;
	pointer.fp['*'] = mul;
	pointer.fp['/'] = dev;

	while (1)
	{
		printf("프로그램 종료 = ctrl + c\n\n원하는 수식을 입력하세요 : ");
		scanf("%d %c %d", &first.num1, &function.operation, &second.num2);

		printf("%d\n\n", pointer.fp[function.operation](first.num1, second.num2));
	}

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int c, int d)
{
	return c - d;
}

int mul(int e, int f)
{
	return e * f;
}

int dev(int g, int h)
{
	return g / h;
}