#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);

	if (a == 'k')   
		printf("����\n");

	if (a != 'k')   
		printf("��\n");

	if (a > 'o')
		printf("����\n");

	if (a <= 'h')    
		printf("����\n");

	if (a > 'h')
		printf("��\n");

	if (a <= 'o')
		printf("��\n");

}