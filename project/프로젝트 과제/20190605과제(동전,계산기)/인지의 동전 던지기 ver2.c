/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNING

int program_off();
int coin_choice();
int coin_resault_win();
int coin_resault_loss();
int coin_roof_2();
int coin_roof_3();
int coin_roof_4();
int coin_roof_5();

typedef struct coin_code
{
	int coin1, menu1, menu2;
	char lang[100];
}coin;

int main()
{
	srand((unsigned)time(NULL));
	coin game1[100], infor[100];

	strcpy(infor[0].lang, "������ ��� �����ðڽ��ϱ�?\n\n|1.     1��     |\n|2.     2��     |\n|3.     3��     |\n|4.     4��     |\n|5.     5��     |\n\n�����Ϸ��� ����6 �� �Է� �ϼ���.\n\n");

	while (1)
	{
		printf("%s", infor[0].lang);
		scanf("%d", &game1[0].menu1);

		if (6 == game1[0].menu1)
		{
			program_off();
			break;
		}

		switch (game1->menu1)
		{
		case 1:
			coin_choice();
			break;

		case 2:
			coin_roof_2();
			break;

		case 3:
			coin_roof_3();
			break;

		case 4:
			coin_roof_4();
			break;

		case 5:
			coin_roof_5();
			break;

		}
	}
}

int program_off()
{
	coin code1;

	strcpy(code1.lang, "���α׷��� �����մϴ�.");
	printf("%s\n\n", code1.lang);

	return 0;
}

int coin_choice()
{
	coin code2, code2_1;
	strcpy(code2.lang, "������ �ո�� �޸� �� �ϳ��� �����ϼ���.\n\n1. �ո�\n2. �޸�\n");
	code2_1.menu2 = 0;

	printf("%s", code2.lang);
	scanf("%d", &code2_1.menu2);

	if (code2_1.menu2 == rand() % 2)
	{
		coin_resault_win();
	}
	else
	{
		coin_resault_loss();
	}

	return 0;
}

int coin_resault_win()
{
	coin code3;

	strcpy(code3.lang, "�¾ҽ��ϴ�. �÷��̾� ��");
	printf("%s\n\n", code3.lang);

	return 0;
}

int coin_resault_loss()
{
	coin code4;

	strcpy(code4.lang, "Ʋ�Ƚ��ϴ�. �÷��̾� ��");
	printf("%s\n\n", code4.lang);

	return 0;
}

int coin_roof_2()
{
	for (int i = 1; i <= 2; i++)
	{
		coin_choice();
	}

	return 0;
}

int coin_roof_3()
{
	for (int i = 1; i <= 3; i++)
	{
		coin_choice();
	}

	return 0;
}

int coin_roof_4()
{
	for (int i = 1; i <= 4; i++)
	{
		coin_choice();
	}

	return 0;
}

int coin_roof_5()
{
	for (int i = 1; i <= 5; i++)
	{
		coin_choice();
	}

	return 0;
}
*/