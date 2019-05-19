#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	unsigned char i;
	scanf("%d", &i);

	while (i >= 1200){
		i -= 1200;
		printf("%u\n", i);
	}
	return 0;
}