#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	if (c != 'k')
		printf("��\n");
	else
		printf("����\n");
	if (c > 'h')
		printf("��\n");
	else
		printf("����\n");
	if (c <= 'o')
		printf("��\n");
	else
		printf("����\n");
}