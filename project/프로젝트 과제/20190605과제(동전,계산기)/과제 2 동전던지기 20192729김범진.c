#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();
int play(char a);

struct bumjin{
	int coin;
};

int main() {
	struct bumjin game1;
	printf("�ո�(1) OR �޸�(0)\n");
	scanf_s("%d", &game1.coin);
	printf("1 = �ո�   0 = �޸�\n����� ������ ����? = %d\n", game1.coin);
	printf("�ι�° ������ ����? = %d\n", b_rand());
	play(game1.coin);
}

int play(char a) {
	struct bumjin game;
	if (a == 1) {
		if (b_rand() == a)
			printf("�� ���� �����ϴ�.\n");
		else
			printf("�� ���� �ٸ��ϴ�.\n");
	}
	else if (a == 0) {
		if (b_rand() == a)
			printf("�� ���� �����ϴ�.\n");
		else
			printf("�� ���� �ٸ��ϴ�.\n");
	}
	else
		printf("����");
}

int b_rand() {
	srand((unsigned)time(NULL));
	return(rand() % 2);
}