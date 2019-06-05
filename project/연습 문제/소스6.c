#include <stdio.h>
#include <string.h>

int plus(int a, int b);
int minus(int c, int d);
int gop(int e, int f);
int div(int g, int h);

struct sb {
	int num1, num2;
	char ysgh;
};

void main() {
	int(*bs)(int, int);

	bs = div;

	struct sb ri;

	while (1) {
		printf("식을 입력하세요 : ");
		scanf("%d %c %d", &ri.num1, &ri.ysgh, &ri.num2);

		if (ri.num1 == 0 && ri.num2 == 0 && ri.ysgh == 'q')
			break;

		switch (ri.ysgh) {
		case '+':
			printf("%d + %d = %d\n", ri.num1, ri.num2, plus(ri.num1, ri.num2));
			break;
		case '-':
			printf("%d - %d = %d\n", ri.num1, ri.num2, minus(ri.num1, ri.num2));
			break;
		case '*':
			printf("%d * %d = %d\n", ri.num1, ri.num2, gop(ri.num1, ri.num2));
			break;
		case '/':
			printf("%d / %d = %d\n", ri.num1, ri.num2, div(ri.num1, ri.num2));
			break;
		}
	}
}

int plus(int a, int b) {

	return a + b;
}

int minus(int c, int d) {

	return c - d;
}

int gop(int e, int f) {

	return e * f;
}

int div(int g, int h) {

	return g / h;
}