#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();

struct moinji
{
	int menu;
	int coin;
	int FB;
} inji1;

int main()
{
	srand((unsigned)time(NULL));
	game();
}

void game() {
	while (1) {
		inji1.coin = rand() % 2;
		printf("1, ���� ������\n2, ����\n�Է� : ");
		scanf("%d", &inji1.menu);
		if (inji1.menu == 1) {
			printf("1, ��  2, ��\n�Է� : ");
			scanf("%d", &inji1.FB);
			if (inji1.FB == inji1.coin)
				printf("\n�÷��̾� ��!\n\n");
			else
				printf("\n��ǻ�� ��!\n\n");
		}
		else if(inji1.menu == 2) {
			printf("����");
			break;
		}
		else {
			printf("�Է� ����");
		}
	}
}
