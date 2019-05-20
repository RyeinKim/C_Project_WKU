#include <stdio.h>

int main() {
	char c1;
	scanf("%c", &c1);

	for (; c1 <= 'z'; c1++)
	{
		printf("%c",c1);
	}

	return 0;
}