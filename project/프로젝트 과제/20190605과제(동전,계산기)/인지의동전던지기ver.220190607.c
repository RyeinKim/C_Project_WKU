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
		printf("1, 동전 던지기\n2, 종료\n입력 : ");
		scanf("%d", &inji1.menu);
		if (inji1.menu == 1) {
			printf("1, 앞  2, 뒤\n입력 : ");
			scanf("%d", &inji1.FB);
			if (inji1.FB == inji1.coin)
				printf("\n플레이어 승!\n\n");
			else
				printf("\n컴퓨터 승!\n\n");
		}
		else if(inji1.menu == 2) {
			printf("종료");
			break;
		}
		else {
			printf("입력 오류");
		}
	}
}
