#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	srand((unsigned)time(NULL));
	return(rand() % 2);
}
	int main() {
		int a;
		char b;

		do{
			printf("�ո� = 0 , �޸� = 1\n\n");
			printf("������ �ո� �޸��� �����ϼ���. \n\n");
			printf("�����ϻ��� : ");
			scanf("%d", &a);

			if (a == 0) {
				printf("�ո�[0]�� �����Ͽ����ϴ�.\n");
				printf("�ٸ� ������ ���� = %d\n", b_rand());
				printf("(�ո� = 0 , �޸� = 1)\n\n\n");
				if (a == b_rand()) {
					printf("�����Դϴ�. \n\n\n\n");
					printf("�ٽ� �Ͻðڽ��ϱ�?  (��� : y , �ߴ� : n)\n\n");
					printf("�Է� : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
				}
				else
					printf("������ Ʋ�ȳ׿� �ٽõ����غ�����.\n\n\n\n");
					printf("�ٽ� �Ͻðڽ��ϱ�?  (��� : y , �ߴ� : n)\n\n");
					printf("�Է� : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
			}

			else if (a == 1) {
				printf("�޸�[1]�� �����Ͽ����ϴ�.\n");
				printf("�ٸ� ������ ���� = %d\n", b_rand());
				printf("(�ո� = 0 , �޸� = 1)\n\n\n");
				if (a == b_rand()) {
					printf("�����Դϴ�. \n\n\n\n");
					printf("�ٽ� �Ͻðڽ��ϱ�?  (��� : y , �ߴ� : n)\n\n");
					printf("�Է� : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
				}
				else {
					printf("������ Ʋ�ȳ׿� �ٽõ����غ�����.\n\n\n\n");
					printf("�ٽ� �Ͻðڽ��ϱ�?  (��� : y , �ߴ� : n)\n\n");
					printf("�Է� : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");

				}
			}

			else
				printf("�߸� �����Ͽ����ϴ�.\n");

		} while (b == 'y');
		


}