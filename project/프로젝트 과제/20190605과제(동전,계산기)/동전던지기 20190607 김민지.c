#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int b_rand();
int program_continue();
int off();
int win();
int lose();
int program_2();
int program_3();
int program_4();
int program_5();

typedef struct toss_coin {
	int tnum, face;
	char explain[100];
}tc;

int main() {
	tc coin[10];

	strcpy(coin[0].explain, "�޴�1\n���� �Ͻ÷��� 0�� ��������.\n������ �� �� �����ðڽ��ϱ�?\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\nȽ�� �Է� : ");

	while (1) {
		printf("%s", coin[0].explain);
		scanf("%d", &coin[0].tnum);

		if (coin[0].tnum == 0) {
			off();
			break;
		}

		else if (coin[0].tnum == 1) {
			program_continue();
		}

		else if (coin[0].tnum == 2) {
			program_2();
		}

		else if (coin[0].tnum == 3) {
			program_3();
		}

		else if (coin[0].tnum == 4) {
			program_4();

		}

		else if (coin[0].tnum == 5) {
			program_5();
		}
	}
}

int program_continue() {
	tc coinp;
	strcpy(coinp.explain, "\n�޴�2\n������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n1. �ո�\n2. �޸�\n[����]==> ");

	printf("%s", coinp.explain);
	scanf("%d", &coinp.face);

	if (coinp.face == b_rand)
		win();
	else
		lose();

	return 0;
}

int off()
{
	tc esc;
	strcpy(esc.explain, "���α׷��� �����մϴ�.\n");

	printf("%s", esc.explain);

	return 0;
}

int win() {
	tc win;
	strcpy(win.explain, "�÷��̾� ��\n\n");

	printf("%s", win.explain);

	return 0;
}

int lose() {
	tc lose;
	strcpy(lose.explain, "��ǻ�� ��\n\n");

	printf("%s", lose.explain);

	return 0;
}

int program_2() {
	for (int i = 0; i < 2; i++)
		program_continue();

	return 0;
}

int program_3() {
	for (int i = 0; i < 3; i++)
		program_continue();

	return 0;
}

int program_4() {
	for (int i = 0; i < 4; i++)
		program_continue();

	return 0;
}

int program_5() {
	for (int i = 0; i < 5; i++)
		program_continue();

	return 0;
}

int b_rand()
{
	srand((unsigned)time(NULL));
	return (rand() % 2 + 1);
}