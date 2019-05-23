#include<stdio.h>
int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18) {
		print("청소년 관람 불가");
	}
	return 0;
}