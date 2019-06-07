#include <stdio.h>
#include <string.h>

int plus(int a, int b);
int minus(int c, int d);
int gop(int e, int f);
int div(int g, int h);

typedef struct calculator {
	int fnum, snum;
	char ysgh;
}calc;

int main() {
	calc cpro;

	int(*gsg[4])(int, int);

	gsg['+'] = plus;
	gsg['-'] = minus;
	gsg['*'] = gop;
	gsg['/'] = div;

	while (1) {
		printf("식을 입력하세요 : ");
		scanf("%d %c %d", &cpro.fnum, &cpro.ysgh, &cpro.snum);

		if (cpro.fnum == 0 && cpro.snum == 0 && cpro.ysgh == 'q')
			break;

		printf("%d %c %d = %d\n\n", cpro.fnum, cpro.ysgh, cpro.snum, gsg[cpro.ysgh](cpro.fnum, cpro.snum));
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