#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int dis(int a, int b);
int mul(int a, int b);

struct bumzani {
	int st, nd, num1, num2, num3, num4;
	int (*ADD)(int, int);
	int (*SUB)(int, int);
	int (*DIS)(int, int);
	int (*MUL)(int, int);
	char Sym;
};

int main() {
	while (1) {
		struct bumzani A;
		printf("숫자를 입력하세요 = ");
		scanf("%d", &A.st);
		printf("문자 입력하세요 = ");
		scanf(" %c", &A.Sym);
		printf("숫자를 입력하세요 = ");
		scanf("%d", &A.nd);

		A.ADD = add;
		A.SUB = sub;
		A.DIS = dis;
		A.MUL = mul;

		if (A.Sym == '+')
			printf("%d\n\n", A.ADD(A.st, A.nd));
		else if (A.Sym == '-')
			printf("%d\n\n", A.SUB(A.st, A.nd));
		else if (A.Sym == '/')
			printf("%d\n\n", A.DIS(A.st, A.nd));
		else if (A.Sym == '*')
			printf("%d\n\n", A.MUL(A.st, A.nd));
		else
			printf("오류\n\n");
	}
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int dis(int a, int b) {
	return a / b;
}

int mul(int a, int b) {
	return a * b;
}