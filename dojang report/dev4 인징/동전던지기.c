#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>


int b_rand()
{
	srand((unsigned)time(NULL));
	return rand() % 2;
}

int main()
{
	int num1, num2;
	while(1)
	{
		char c;
ONE:
	printf("동전던지기 게임\n\n");
	printf("메뉴 1\n");
	printf("동전을 몇번 던지시겠습니까?\n");
	printf("1. 1번\n");
	printf("2. 2번\n");
	printf("3. 3번\n");
	printf("4. 4번\n");
	printf("5. 5번\n\n");

	scanf("%d", &num1); //입력 값

	printf("메뉴 2\n"); 

	//시작
		if(num1 == 1)
		{
			printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
			printf("1. 앞면\n");
			printf("2. 뒷면\n");

			scanf("%d", &num2);
			if (num2 == b_rand()) {
				printf("앞면\n");
				printf("player 승\n\n");
			}
			else {
				printf("뒷면\n");
				printf("computer 승\n\n");
			}
		}

		if (num1 == 2)
		{
			for (int i = 0; i < 2; i++)
			{
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n");
				printf("2. 뒷면\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("앞면\n");
					printf("player 승\n\n");
				}
				else {
					printf("뒷면\n");
					printf("computer 승\n\n");
				}
			}
		}

		if (num1 == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n");
				printf("2. 뒷면\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("앞면\n");
					printf("player 승\n\n");
				}
				else {
					printf("뒷면\n");
					printf("computer 승\n\n");
				}
			}
		}

		if (num1 == 4)
		{
			for (int i = 0; i < 4; i++)
			{
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n");
				printf("2. 뒷면\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("앞면\n");
					printf("player 승\n\n");
				}
				else {
					printf("뒷면\n");
					printf("computer 승\n\n");
				}
			}
		}

		if (num1 == 5)
		{
			for (int i = 0; i < 5; i++)
			{
				printf("동전의 앞면과 뒷면 중 하나를 고르시오.\n");
				printf("1. 앞면\n");
				printf("2. 뒷면\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("앞면\n");
					printf("player 승\n\n");
				}
				else {
					printf("뒷면\n");
					printf("computer 승\n\n");
				}
			}
		}
		//끝
		printf("q / r : ");
		getchar();
		scanf("%c", &c);

		if (c == 'q' || c == 'Q')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if(c == 'r' || c == 'R')
		{
			printf("처음으로 돌아갑니다...\n\n");
			goto ONE;
		}
	}

	return 0;
}