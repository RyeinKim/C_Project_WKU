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
	printf("앞면(1) OR 뒷면(0)\n");
	scanf_s("%d", &game1.coin);
	printf("1 = 앞면   0 = 뒷면\n당신이 선택한 면은? = %d\n", game1.coin);
	printf("두번째 동전의 면은? = %d\n", b_rand());
	play(game1.coin);
}

int play(char a) {
	struct bumjin game;
	if (a == 1) {
		if (b_rand() == a)
			printf("두 면이 같습니다.\n");
		else
			printf("두 면이 다름니다.\n");
	}
	else if (a == 0) {
		if (b_rand() == a)
			printf("두 면이 같습니다.\n");
		else
			printf("두 면이 다름니다.\n");
	}
	else
		printf("오류");
}

int b_rand() {
	srand((unsigned)time(NULL));
	return(rand() % 2);
}