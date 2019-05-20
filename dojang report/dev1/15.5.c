#include <stdio.h>
void main() {

	int a;
	scanf("%d", &a);
	int A = (a % 100000) / 10000;
	int B = (a % 10000) / 1000;
	int C = (a % 1000) / 100;
	int D = (a % 100) / 10;
	int E = (a % 10) / 1;
	printf("%d %d %d %d %d", E, D, C, B, A);

}