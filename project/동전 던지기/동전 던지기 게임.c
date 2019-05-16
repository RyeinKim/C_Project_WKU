#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNING

int b_rand()

{
	srand((unsigned)time(NULL));

	return rand() % 2;

}

int main()
{
	int coin1;
	int menu1, menu2;

	while (1)
	{
		printf("| 동전을 몇번 던지시겠습니까? |\n");
		printf("|                             |\n");
		printf("|                             |\n");
		printf("|          1. 한 번           |\n");
		printf("|          2. 두 번           |\n");
		printf("|          3. 세 번           |\n");
		printf("|          4. 네 번           |\n");
		printf("|          5. 다섯 번         |\n");
		printf("|                             |\n");
		printf("|                             |\n");
		printf("|   종료하려면 6을 누르세요.  |\n");

		scanf("%d", &menu1);

		if (menu1 == 6)
		{
			printf("동전 던지기를 종료합니다.\n");
			break;
		}

		printf("동전의 앞면과 뒷면중 하나를 선택하세요.\n\n");
		printf("1. 앞면\n2. 뒷면\n\n");

		scanf("%d", &menu2);

		switch (menu1)
		{
		case 1:
		{
			if (menu2 == b_rand())
			{
				printf("맞았습니다. 플레이어 승\n\n");
			}
			else
			{
				printf("틀렸습니다. 플레이어 패\n\n");
			}
			break;
		}
		case 2:
		{
			for (int i = 1; i < 2; ++i)
			{
				if (menu2 == b_rand())
				{
					printf("맞았습니다. 플레이어 승\n\n");
				}
				else
				{
					printf("틀렸습니다. 플레이어 패\n\n");
				}
				printf("동전의 앞면과 뒷면중 하나를 선택하세요.\n\n");
				printf("1. 앞면\n2. 뒷면\n\n");

				scanf("%d", &menu2);
			}
			break;
		}
		case 3:
		{
			for (int i = 1; i < 3; ++i)
			{
				if (menu2 == b_rand())
				{
					printf("맞았습니다. 플레이어 승\n\n");
				}
				else
				{
					printf("틀렸습니다. 플레이어 패\n\n");
				}
				printf("동전의 앞면과 뒷면중 하나를 선택하세요.\n\n");
				printf("1. 앞면\n2. 뒷면\n\n");

				scanf("%d", &menu2);
			}
			break;
		}
		case 4:
		{
			for (int i = 1; i < 4; ++i)
			{
				if (menu2 == b_rand())
				{
					printf("맞았습니다. 플레이어 승\n\n");
				}
				else
				{
					printf("틀렸습니다. 플레이어 패\n\n");
				}
				printf("동전의 앞면과 뒷면중 하나를 선택하세요.\n\n");
				printf("1. 앞면\n2. 뒷면\n");

				scanf("%d", &menu2);
			}
			break;
		}
		case 5:
		{
			for (int i = 1; i < 3; ++i)
			{
				if (menu2 == b_rand())
				{
					printf("맞았습니다. 플레이어 승\n\n");
				}
				else
				{
					printf("틀렸습니다. 플레이어 패\n\n");
				}
				printf("동전의 앞면과 뒷면중 하나를 선택하세요.\n\n");
				printf("1. 앞면\n2. 뒷면\n\n");

				scanf("%d", &menu2);
			}
			break;
		}
		}
	}
}