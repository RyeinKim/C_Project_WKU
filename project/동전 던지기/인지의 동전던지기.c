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
	printf("���������� ����\n\n");
	printf("�޴� 1\n");
	printf("������ ��� �����ðڽ��ϱ�?\n");
	printf("1. 1��\n");
	printf("2. 2��\n");
	printf("3. 3��\n");
	printf("4. 4��\n");
	printf("5. 5��\n\n");

	scanf("%d", &num1); //�Է� ��

	printf("�޴� 2\n"); 

	//����
		if(num1 == 1)
		{
			printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
			printf("1. �ո�\n");
			printf("2. �޸�\n");

			scanf("%d", &num2);
			if (num2 == b_rand()) {
				printf("�ո�\n");
				printf("player ��\n\n");
			}
			else {
				printf("�޸�\n");
				printf("computer ��\n\n");
			}
		}

		if (num1 == 2)
		{
			for (int i = 0; i < 2; i++)
			{
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n");
				printf("2. �޸�\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("�ո�\n");
					printf("player ��\n\n");
				}
				else {
					printf("�޸�\n");
					printf("computer ��\n\n");
				}
			}
		}

		if (num1 == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n");
				printf("2. �޸�\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("�ո�\n");
					printf("player ��\n\n");
				}
				else {
					printf("�޸�\n");
					printf("computer ��\n\n");
				}
			}
		}

		if (num1 == 4)
		{
			for (int i = 0; i < 4; i++)
			{
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n");
				printf("2. �޸�\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("�ո�\n");
					printf("player ��\n\n");
				}
				else {
					printf("�޸�\n");
					printf("computer ��\n\n");
				}
			}
		}

		if (num1 == 5)
		{
			for (int i = 0; i < 5; i++)
			{
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n");
				printf("2. �޸�\n");

				scanf("%d", &num2);
				if (num2 == b_rand()) {
					printf("�ո�\n");
					printf("player ��\n\n");
				}
				else {
					printf("�޸�\n");
					printf("computer ��\n\n");
				}
			}
		}
		//��
		printf("q / r : ");
		getchar();
		scanf("%c", &c);

		if (c == 'q' || c == 'Q')
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if(c == 'r' || c == 'R')
		{
			printf("ó������ ���ư��ϴ�...\n\n");
			goto ONE;
		}
	}

	return 0;
}