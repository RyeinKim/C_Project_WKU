/*�ù��� ���� �����Դϴ�. 1�ο����� ���и� �Ǵ����� �ʰ� �и� �ް� ����մϴ�.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNING

int menu;
char ch1; // ch�� choice�� ���
int my_card();
int b_rand()
{
	srand((unsigned)time(NULL));
	return (rand() % 10) + 1;
	Sleep(3000);
}

int b_rand1()
{
	srand((unsigned)time(NULL));
	return (rand() % 10) + 1;
	Sleep(3000);
}

int b_rand2()
{
	srand((unsigned)time(NULL));
	return (rand() % 2);
	Sleep(3000);
}

int b_rand3()
{
	srand((unsigned)time(NULL));
	return (rand() % 2) + 3;
	Sleep(2000);
}

int main()
{
	while (1)
	{        
	ONE:
		printf("���� �����Դϴ�.\n");
		printf("1�� ������ ����.\n");
		printf("0�� ������ ����.\n");

		scanf("%d", &menu);
		getchar();

		if (menu == 0)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (menu == 1)
		{
			printf("�и� �����ðڽ��ϱ�?\n\n");
			printf("y / n\n\n");

			scanf("%c", &ch1);
		}
		else
		{
			printf("y �Ǵ� n�� �Է��ϼ���.\n\n");
			break;
		}

		switch (ch1)
		{
		case 'y':
		{
			printf("�и� �����ִ� ���Դϴ�....\n\n");
			printf("......\n\n");
			break;
		}
		case 'n':
		{
			printf("ù ȭ������ ���ư��ϴ�.\n\n");
			goto ONE;
		}
		}

		my_card();
	
	}
}

int my_card()
{
	int card3[10], card4[10];
	int k = 1, �� = 1;

	for (int i = 0; i < 10; i++)
	{
		card3[i] = k++;
	}

	for (int i = 0; i < 10; i++)
	{
		card4[i] = ��++;
	}

	for (int i = 0; i < 10; i++)
	{
		if ((card3[i] == b_rand()) && 0 == b_rand2())
		{
			printf("%d��, ", card3[i]);
			break;
		}

		else if ((card3[i] == b_rand1()) && 4 == b_rand3())
		{
			printf("%d�� (�׸�), ", card3[i]);
			break;
		}
	}

	Sleep(2500);

	for (int i = 0; i < 10; i++)
	{
		if ((card4[i] == b_rand()) && 1 == b_rand2())
		{
			printf("%d�� ", card4[i]);
			break;
		}

		else if ((card4[i] == b_rand1()) && 3 == b_rand3())
		{
			printf("%d�� (�׸�) ", card4[i]);
			break;
		}
	}
}