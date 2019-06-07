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
		printf("팀원%d의 이름을 입력하세요 : ", j);
		scanf("%s", &com1.name);
		printf("나이를 입력하세요 : ");
		scanf("%d", &com1.age);
		printf("성별을 입력하세요 : ");
		scanf("%s", &com1.sex);
		printf("학번를 입력하세요 : ");
		scanf("%d", &com1.psnum);
		printf("키를 입력하세요 : ");
		scanf("%f", &com1.height);
		printf("몸무게를 입력하세요 : ");
		scanf("%f", &com1.weight);
		printf("\n");
			
		
		printf("\n\n이름 : %s\n나이 : %d\n성별 : %s\n학번 : %d\n키 : %.2f\n몸무게 : %.2f\n\n", com1.name, com1.age, com1.sex, com1.psnum, com1.height, com1.weight);
		printf("\n=============================================================\n");
			
	}
	
}
