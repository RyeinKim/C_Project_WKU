#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bumjin
{
	int classnumber, age;
	float m, kg;
	char name[10], school1[10], school2[10], school3[10], school4[10], class4[30], sex[10];
};
float BMI(float	a, float b) {

	return (a + b) / 0.9;

}

void number() {
	struct bumjin A1;
	A1.classnumber = 20192729;
	printf("학번 : % d\n", A1.classnumber);
}
int main() {
	struct bumjin A1;
	strcpy(A1.name, "범자니");
	strcpy(A1.school1, "장덕초");
	strcpy(A1.school2, "장덕중");
	strcpy(A1.school3, "진흥고");
	strcpy(A1.school4, "원광대");
	strcpy(A1.class4, "컴퓨터소프트웨어공학과");
	strcpy(A1.sex, "남자");
	
	A1.age = 20;
	A1.m = 184.4;
	A1.kg = 94.4;

	printf("이름 : %s\n", A1.name);
	printf("졸업한 초등학교 : %s\n", A1.school1);
	printf("졸업한 중학교 : %s\n", A1.school2);
	printf("졸업한 고등학교 : %s\n", A1.school3);
	printf("다니고 있는 대학교 : %s\n", A1.school4);
	printf("학과이름 : %s\n", A1.class4);
	printf("성별 : %s\n", A1.sex);
	printf("나이 : %d\n", A1.age);
	printf("키 : %f\n", A1.m);
	printf("몸무게 : %f\n", A1.kg);
	void (*num)();
		num = number;
		num();

	float num1;

	num1 = BMI(A1.m, A1.kg);

	printf("BMI = %f", num1);
}

