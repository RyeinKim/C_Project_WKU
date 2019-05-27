/*시범용 섯다 게임입니다. 1인용으로 승패를 판단하지 않고 패만 받고 출력합니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNING

int menu;
char ch1; // ch는 choice의 약어
int my_card();
int b_rand()
{
	srand((unsigned)time(NULL));
	return (rand() % 10) + 1;
	Sleep(3000);
}

int b_rand1()
{
	srand((unsigned)time(NULL));
	return (rand() % 10) + 1;
	Sleep(3000);
}

int b_rand2()
{
	srand((unsigned)time(NULL));
	return (rand() % 2);
	Sleep(3000);
}

int b_rand3()
{
	srand((unsigned)time(NULL));
	return (rand() % 2) + 3;
	Sleep(2000);
}

int main()
{
	while (1)
	{        
	ONE:
		printf("섯다 게임입니다.\n");
		printf("1을 누르면 시작.\n");
		printf("0을 누르면 종료.\n");

		scanf("%d", &menu);
		getchar();

		if (menu == 0)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if (menu == 1)
		{
			printf("패를 받으시겠습니까?\n\n");
			printf("y / n\n\n");

			scanf("%c", &ch1);
		}
		else
		{
			printf("y 또는 n만 입력하세요.\n\n");
			break;
		}

		switch (ch1)
		{
		case 'y':
		{
			printf("패를 나눠주는 중입니다....\n\n");
			printf("......\n\n");
			break;
		}
		case 'n':
		{
			printf("첫 화면으로 돌아갑니다.\n\n");
			goto ONE;
		}
		}

		my_card();
	
	}
}

int my_card()
{
	int card3[10], card4[10];
	int k = 1, ㅣ = 1;

	for (int i = 0; i < 10; i++)
	{
		card3[i] = k++;
	}

	for (int i = 0; i < 10; i++)
	{
		card4[i] = ㅣ++;
	}

	for (int i = 0; i < 10; i++)
	{
		if ((card3[i] == b_rand()) && 0 == b_rand2())
		{
			printf("%d월, ", card3[i]);
			break;
		}

		else if ((card3[i] == b_rand1()) && 4 == b_rand3())
		{
			printf("%d월 (그림), ", card3[i]);
			break;
		}
	}

	Sleep(2500);

	for (int i = 0; i < 10; i++)
	{
		if ((card4[i] == b_rand()) && 1 == b_rand2())
		{
			printf("%d월 ", card4[i]);
			break;
		}

		else if ((card4[i] == b_rand1()) && 3 == b_rand3())
		{
			printf("%d월 (그림) ", card4[i]);
			break;
		}
	}
}