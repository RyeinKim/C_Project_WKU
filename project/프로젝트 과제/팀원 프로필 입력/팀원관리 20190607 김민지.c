#include <stdio.h>
#include <string.h>

typedef struct team_list {
	char name[10], sex[5];
	int age, psnum;
	float height, weight;
}team;

void main() {
	team com1;

	for (int i = 1; i <= 6; i++) {
		printf("����%d�� �̸��� �Է��ϼ��� : ", j);
		scanf("%s", &com1.name);
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d", &com1.age);
		printf("������ �Է��ϼ��� : ");
		scanf("%s", &com1.sex);
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &com1.psnum);
		printf("Ű�� �Է��ϼ��� : ");
		scanf("%f", &com1.height);
		printf("�����Ը� �Է��ϼ��� : ");
		scanf("%f", &com1.weight);
		printf("\n");
			
		
		printf("\n\n�̸� : %s\n���� : %d\n���� : %s\n�й� : %d\nŰ : %.2f\n������ : %.2f\n\n", com1.name, com1.age, com1.sex, com1.psnum, com1.height, com1.weight);
		printf("\n=============================================================\n");
			
	}
	
}
