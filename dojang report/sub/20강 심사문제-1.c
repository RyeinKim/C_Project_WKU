#include <stdio.h>

void main()
{
	char c1;

	scanf("%c", &c1);

	if (c1 != 'k')
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
	if (c1 > 'h')
	{
		printf("��\n");
	}
	else 
	{
		printf("����\n");
	}
	if (c1 <= 'o')
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
}