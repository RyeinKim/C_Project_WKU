#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNING

typedef struct team
{
	int c_num, age;
	char name[10], sex[5];
	float high, weight;
}team_infor;

void main()
{
	struct team one[10];
	
	for (int i = 1; i <= 6; i++)
	{
		printf("����%d�� �̸��� �Է��ϼ���.", i);
		scanf("%s", &one[i].name);
		printf("����%d�� ���̸� �Է��ϼ���.", i);
		scanf("%d", &one[i].age);
		printf("����%d�� ������ �Է��ϼ���.", i);
		scanf("%s", &one[i].sex);
		printf("����%d�� �й��� �Է��ϼ���.", i);
		scanf("%d", &one[i].c_num);
		printf("����%d�� Ű�� �Է��ϼ���.", i);
		scanf("%f", &one[i].high);
		printf("����%d�� �����Ը� �Է��ϼ���.", i);
		scanf("%f", &one[i].weight);
	}

	for (int i = 1; i <= 6; i++)
	{
		printf("=============================================================================\n����%d\n\n", i);
		printf("�̸� : %s\n���� : %d\n���� : %s\n�й� : %d\nŰ : %.1f\n������ : %.1f\n", one[i].name, one[i].age, one[i].sex, one[i].c_num, one[i].high, one[i].weight);
		printf("=============================================================================\n");
	}
}