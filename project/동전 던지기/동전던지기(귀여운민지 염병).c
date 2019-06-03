#include <stdio.h>

int b_rand() {
	srand((unsigned)time(NULL));
	return (rand() % 2 +1);
}

int main() {
	int a, b, i;
	char c;
	
	while (1) {
		printf("메뉴1\n");
		printf("종료 하시려면 0을 누르세요.\n");
		printf("동전을 몇 번 던지시겠습니까?\n");
		printf("1. 1번\n2. 2번\n3. 3번\n4. 4번\n5. 5번\n");
		printf("횟수 입력 : ");
		
		scanf("%d", &a);

		if (0 == a)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		if (a == 1) {
			printf("\n메뉴2\n");
			printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("1. 앞면\n2. 뒷면\n");
			printf("[선택]==> ");
			scanf("%d", &b);

			if (b == b_rand()) {
				printf("플레이어 승\n\n");
			}
			else
				printf("컴퓨터 승\n\n");
		}
		else if (a == 2) {
			for (i = 0; i < 2; i++) {
				printf("\n메뉴2\n");
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n2. 뒷면\n");
				printf("[선택]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("플레이어 승\n\n");
				}
				else
					printf("컴퓨터 승\n\n");
			}
		}
		else if (a == 3) {
			for (i = 0; i < 3; i++) {
				printf("\n메뉴2\n");
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n2. 뒷면\n");
				printf("[선택]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("플레이어 승\n\n");
				}
				else
					printf("컴퓨터 승\n\n");
			}
		}
		else if (a == 4) {
			for (i = 0; i < 4; i++) {
				printf("\n메뉴2\n");
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n2. 뒷면\n");
				printf("[선택]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("플레이어 승\n\n");
				}
				else
					printf("컴퓨터 승\n\n");
			}
		}
		else if (a == 5) {
			for (i = 0; i < 5; i++) {
				printf("\n메뉴2\n");
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n2. 뒷면\n");
				printf("[선택]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("플레이어 승\n\n");
				}
				else
					printf("컴퓨터 승\n\n");
			}
		}
	}
}