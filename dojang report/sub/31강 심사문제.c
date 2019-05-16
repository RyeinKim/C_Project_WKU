#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	int num1;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++)
	{
		for (int j = num1 - 1; j >= 0; j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		for (int j = 0; j < num1 - 1; j++)
		{
			if (j < i)
				printf("*");
		}

		printf("\n");
	}
}