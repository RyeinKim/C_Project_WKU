#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	while (1)
	{
		int num1, num2, random = (rand() % 2);
		srand((unsigned)time(NULL));
		printf("\n메뉴1\n동전을 몇번 던지시겠습니까?\n");
		printf("1.1번\n2.2번\n3.3번\n4.4번\n5.5번\n");
		scanf("%d", &num1);
		switch (num1)
		{
		case 1:
			printf("\n메뉴2\n동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("0.앞면\n1.뒷면\n");
			scanf("%d", &num2);
			if (num2 == random)
				printf("\n플레이어 승\n");
			else 
				printf("\n컴퓨터 승\n");
			 
			break;
		case 2:
			printf("\n메뉴2\n동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("0.앞면\n1.뒷면\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n플레이어 승\n");
			else
				printf("\n컴퓨터 승\n");

			break;
		case 3:
			printf("\n메뉴2\n동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("0.앞면\n1.뒷면\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n플레이어 승\n");
			else
				printf("\n컴퓨터 승\n");

			break;
		case 4:
			printf("\n메뉴2\n동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("0.앞면\n1.뒷면\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n플레이어 승\n");
			else
				printf("\n컴퓨터 승\n");

			break;
		case 5:
			printf("\n메뉴2\n동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("0.앞면\n1.뒷면\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n플레이어 승\n");
			else
				printf("\n컴퓨터 승\n");

			break;
		default:
			printf("\n잘못된 선택\n");
			break;
		}

	}
	return 0;
}
