#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);

	if (a == 'k')   
		printf("°ÅÁş\n");

	if (a != 'k')   
		printf("Âü\n");

	if (a > 'o')
		printf("°ÅÁş\n");

	if (a <= 'h')    
		printf("°ÅÁş\n");

	if (a > 'h')
		printf("Âü\n");

	if (a <= 'o')
		printf("Âü\n");

}