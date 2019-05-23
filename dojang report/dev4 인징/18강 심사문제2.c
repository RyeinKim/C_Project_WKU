#include<stdio.h>
int main()
{
	int korean, english, math, science;

	scanf("%d %d %d %d", &korean, &english, &math, &science);

	
	if (korean >= 0 && korean <= 100 && english >= 0 && english <= 100 && math>= 0 && math <= 100 && science >= 0 && science <= 100)
	{

		if ((korean + english + math + science) / 4 >= 85)
		{
			printf("합격");
		}
		else
			printf("불합격");
	}
	else
		printf("잘못된 점수");
	return 0;

}