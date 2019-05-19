#include <stdio.h>

void main() {
	unsigned long long a;
	scanf("%llu", &a);

	printf("%llu", a << 20 >> 4);

}