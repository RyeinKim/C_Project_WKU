#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	int score1, score2, score3, score4;

	scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
	
	if (score1 >= 0 && score1 <= 100 && score2 >= 0 && score2 <= 100 && score3 >= 0 && score3 <= 100 && score4 >= 0 && score4 <= 100)
	{
		if ((score1 + score2 + score3 + score4) / 4 >= 85)

		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}
	else
	{
		printf("잘못된 점수\n");
	}
}