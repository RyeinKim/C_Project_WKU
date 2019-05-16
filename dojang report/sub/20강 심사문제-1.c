#include <stdio.h>

void main()
{
	char c1;

	scanf("%c", &c1);

	if (c1 != 'k')
	{
		printf("Âü\n");
	}
	else
	{
		printf("°ÅÁş\n");
	}
	if (c1 > 'h')
	{
		printf("Âü\n");
	}
	else 
	{
		printf("°ÅÁş\n");
	}
	if (c1 <= 'o')
	{
		printf("Âü\n");
	}
	else
	{
		printf("°ÅÁş\n");
	}
}