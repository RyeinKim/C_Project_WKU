#include <stdio.h>

int b_rand() {
	srand((unsigned)time(NULL));
	return (rand() % 2 +1);
}

int main() {
	int a, b, i;
	char c;
	
	while (1) {
		printf("�޴�1\n");
		printf("���� �Ͻ÷��� 0�� ��������.\n");
		printf("������ �� �� �����ðڽ��ϱ�?\n");
		printf("1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n");
		printf("Ƚ�� �Է� : ");
		
		scanf("%d", &a);

		if (0 == a)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		if (a == 1) {
			printf("\n�޴�2\n");
			printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
			printf("1. �ո�\n2. �޸�\n");
			printf("[����]==> ");
			scanf("%d", &b);

			if (b == b_rand()) {
				printf("�÷��̾� ��\n\n");
			}
			else
				printf("��ǻ�� ��\n\n");
		}
		else if (a == 2) {
			for (i = 0; i < 2; i++) {
				printf("\n�޴�2\n");
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n2. �޸�\n");
				printf("[����]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("�÷��̾� ��\n\n");
				}
				else
					printf("��ǻ�� ��\n\n");
			}
		}
		else if (a == 3) {
			for (i = 0; i < 3; i++) {
				printf("\n�޴�2\n");
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n2. �޸�\n");
				printf("[����]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("�÷��̾� ��\n\n");
				}
				else
					printf("��ǻ�� ��\n\n");
			}
		}
		else if (a == 4) {
			for (i = 0; i < 4; i++) {
				printf("\n�޴�2\n");
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n2. �޸�\n");
				printf("[����]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("�÷��̾� ��\n\n");
				}
				else
					printf("��ǻ�� ��\n\n");
			}
		}
		else if (a == 5) {
			for (i = 0; i < 5; i++) {
				printf("\n�޴�2\n");
				printf("������ �ո�� �޸� �� �ϳ��� ���ÿ�.\n");
				printf("1. �ո�\n2. �޸�\n");
				printf("[����]==> ");
				scanf("%d", &b);

				if (b == b_rand()) {
					printf("�÷��̾� ��\n\n");
				}
				else
					printf("��ǻ�� ��\n\n");
			}
		}
	}
}