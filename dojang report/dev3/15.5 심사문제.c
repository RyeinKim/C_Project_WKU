#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	printf("%d ", a % 10);
	printf("%d ", a / 10 % 10);
	printf("%d ", a / 10 / 10 % 10);
	printf("%d ", a / 10 / 10 / 10 % 10);
	printf("%d", a / 10 / 10 / 10 / 10 % 10);
}