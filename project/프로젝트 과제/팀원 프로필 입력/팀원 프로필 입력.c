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
		printf("팀원%d의 이름을 입력하세요.", i);
		scanf("%s", &one[i].name);
		printf("팀원%d의 나이를 입력하세요.", i);
		scanf("%d", &one[i].age);
		printf("팀원%d의 성별을 입력하세요.", i);
		scanf("%s", &one[i].sex);
		printf("팀원%d의 학번을 입력하세요.", i);
		scanf("%d", &one[i].c_num);
		printf("팀원%d의 키를 입력하세요.", i);
		scanf("%f", &one[i].high);
		printf("팀원%d의 몸무게를 입력하세요.", i);
		scanf("%f", &one[i].weight);
	}

	for (int i = 1; i <= 6; i++)
	{
		printf("=============================================================================\n팀원%d\n\n", i);
		printf("이름 : %s\n나이 : %d\n성별 : %s\n학번 : %d\n키 : %.1f\n몸무게 : %.1f\n", one[i].name, one[i].age, one[i].sex, one[i].c_num, one[i].high, one[i].weight);
		printf("=============================================================================\n");
	}
}