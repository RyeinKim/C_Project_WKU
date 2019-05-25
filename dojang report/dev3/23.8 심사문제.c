#include <stdio.h>
int main() {
	unsigned int num1, num2;
	scanf("%u %u", &num1, &num2);
	printf("%u", num1 ^ num2);
	printf("%u", num1 | num2);
	printf("%u", num1 & num2);
	printf("%u", ~num1);
}