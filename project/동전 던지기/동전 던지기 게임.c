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
		printf("| ������ ��� �����ðڽ��ϱ�? |\n");
		printf("|                             |\n");
		printf("|                             |\n");
		printf("|          1. �� ��           |\n");
		printf("|          2. �� ��           |\n");
		printf("|          3. �� ��           |\n");
		printf("|          4. �� ��           |\n");
		printf("|          5. �ټ� ��         |\n");
		printf("|                             |\n");
		printf("|                             |\n");
		printf("|   �����Ϸ��� 6�� ��������.  |\n");

		scanf("%d", &menu1);

		if (menu1 == 6)
		{
			printf("���� �����⸦ �����մϴ�.\n");
			break;
		}

		printf("������ �ո�� �޸��� �ϳ��� �����ϼ���.\n\n");
		printf("1. �ո�\n2. �޸�\n\n");

		scanf("%d", &menu2);

		switch (menu1)
		{
		case 1:
		{
			if (menu2 == b_rand())
			{
				printf("�¾ҽ��ϴ�. �÷��̾� ��\n\n");
			}
			else
			{
				printf("Ʋ�Ƚ��ϴ�. �÷��̾� ��\n\n");
			}
			break;
		}
		case 2:
		{
			for (int i = 1; i < 2; ++i)
			{
				if (menu2 == b_rand())
				{
					printf("�¾ҽ��ϴ�. �÷��̾� ��\n\n");
				}
				else
				{
					printf("Ʋ�Ƚ��ϴ�. �÷��̾� ��\n\n");
				}
				printf("������ �ո�� �޸��� �ϳ��� �����ϼ���.\n\n");
				printf("1. �ո�\n2. �޸�\n\n");

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
					printf("�¾ҽ��ϴ�. �÷��̾� ��\n\n");
				}
				else
				{
					printf("Ʋ�Ƚ��ϴ�. �÷��̾� ��\n\n");
				}
				printf("������ �ո�� �޸��� �ϳ��� �����ϼ���.\n\n");
				printf("1. �ո�\n2. �޸�\n\n");

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
					printf("�¾ҽ��ϴ�. �÷��̾� ��\n\n");
				}
				else
				{
					printf("Ʋ�Ƚ��ϴ�. �÷��̾� ��\n\n");
				}
				printf("������ �ո�� �޸��� �ϳ��� �����ϼ���.\n\n");
				printf("1. �ո�\n2. �޸�\n");

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
					printf("�¾ҽ��ϴ�. �÷��̾� ��\n\n");
				}
				else
				{
					printf("Ʋ�Ƚ��ϴ�. �÷��̾� ��\n\n");
				}
				printf("������ �ո�� �޸��� �ϳ��� �����ϼ���.\n\n");
				printf("1. �ո�\n2. �޸�\n\n");

				scanf("%d", &menu2);
			}
			break;
		}
		}
	}
}