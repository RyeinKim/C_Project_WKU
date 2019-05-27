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
			printf("앞면 = 0 , 뒷면 = 1\n\n");
			printf("동전의 앞면 뒷면을 선택하세요. \n\n");
			printf("선택하새요 : ");
			scanf("%d", &a);

			if (a == 0) {
				printf("앞면[0]을 선택하였습니다.\n");
				printf("다른 한쪽의 동전 = %d\n", b_rand());
				printf("(앞면 = 0 , 뒷면 = 1)\n\n\n");
				if (a == b_rand()) {
					printf("정답입니다. \n\n\n\n");
					printf("다시 하시겠습니까?  (계속 : y , 중단 : n)\n\n");
					printf("입력 : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
				}
				else
					printf("ㅋㅋㅋ 틀렸네요 다시도전해보세요.\n\n\n\n");
					printf("다시 하시겠습니까?  (계속 : y , 중단 : n)\n\n");
					printf("입력 : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
			}

			else if (a == 1) {
				printf("뒷면[1]을 선택하였습니다.\n");
				printf("다른 한쪽의 동전 = %d\n", b_rand());
				printf("(앞면 = 0 , 뒷면 = 1)\n\n\n");
				if (a == b_rand()) {
					printf("정답입니다. \n\n\n\n");
					printf("다시 하시겠습니까?  (계속 : y , 중단 : n)\n\n");
					printf("입력 : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");
				}
				else {
					printf("ㅋㅋㅋ 틀렸네요 다시도전해보세요.\n\n\n\n");
					printf("다시 하시겠습니까?  (계속 : y , 중단 : n)\n\n");
					printf("입력 : ");
					scanf(" %c", &b);
					printf("\n\n\n\n\n\n\n");

				}
			}

			else
				printf("잘못 선탹하였습니다.\n");

		} while (b == 'y');
		


}