#include <stdio.h>
#include <stdbool.h>

int main()
{
	int b1 = false;
	int b2 = true;


	if (b1 != true)
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	printf("%s\n", b2 == false ? "Âü" : "°ÅÁş");

	return 0;
}