#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	while (1)
	{
		int num1, num2, random = (rand() % 2);
		srand((unsigned)time(NULL));
		printf("\n�޴�1\n������ ��� �����ðڽ��ϱ�?\n");
		printf("1.1��\n2.2��\n3.3��\n4.4��\n5.5��\n");
		scanf("%d", &num1);
		switch (num1)
		{
		case 1:
			printf("\n�޴�2\n������ �ո�� �޸� �� �ϳ��� �����ÿ�.\n");
			printf("0.�ո�\n1.�޸�\n");
			scanf("%d", &num2);
			if (num2 == random)
				printf("\n�÷��̾� ��\n");
			else
				printf("\n��ǻ�� ��\n");

			break;
		case 2:
			printf("\n�޴�2\n������ �ո�� �޸� �� �ϳ��� �����ÿ�.\n");
			printf("0.�ո�\n1.�޸�\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n�÷��̾� ��\n");
			else
				printf("\n��ǻ�� ��\n");

			break;
		case 3:
			printf("\n�޴�2\n������ �ո�� �޸� �� �ϳ��� �����ÿ�.\n");
			printf("0.�ո�\n1.�޸�\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n�÷��̾� ��\n");
			else
				printf("\n��ǻ�� ��\n");

			break;
		case 4:
			printf("\n�޴�2\n������ �ո�� �޸� �� �ϳ��� �����ÿ�.\n");
			printf("0.�ո�\n1.�޸�\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n�÷��̾� ��\n");
			else
				printf("\n��ǻ�� ��\n");

			break;
		case 5:
			printf("\n�޴�2\n������ �ո�� �޸� �� �ϳ��� �����ÿ�.\n");
			printf("0.�ո�\n1.�޸�\n");
			scanf("%d", &num2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			random = (rand() % 2);
			if (num2 == random)
				printf("\n�÷��̾� ��\n");
			else
				printf("\n��ǻ�� ��\n");

			break;
		default:
			printf("\n�߸��� ����\n");
			break;
		}

	}
	return 0;
}