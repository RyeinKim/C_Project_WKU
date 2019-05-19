#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	if (c != 'k')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");
	if (c > 'h')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");
	if (c <= 'o')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");
}