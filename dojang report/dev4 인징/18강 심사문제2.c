#include<stdio.h>
int main()
{
	int korean, english, math, science;

	scanf("%d %d %d %d", &korean, &english, &math, &science);

	
	if (korean >= 0 && korean <= 100 && english >= 0 && english <= 100 && math>= 0 && math <= 100 && science >= 0 && science <= 100)
	{

		if ((korean + english + math + science) / 4 >= 85)
		{
			printf("�հ�");
		}
		else
			printf("���հ�");
	}
	else
		printf("�߸��� ����");
	return 0;

}