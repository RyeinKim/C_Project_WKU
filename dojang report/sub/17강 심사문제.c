#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	int age;

	scanf("%d", &age);

	if (18 > age)
	{
		printf("청소년 관람 불가\n");
	}
}