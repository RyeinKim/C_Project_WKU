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
	printf("�й� : % d\n", A1.classnumber);
}
int main() {
	struct bumjin A1;
	strcpy(A1.name, "���ڴ�");
	strcpy(A1.school1, "�����");
	strcpy(A1.school2, "�����");
	strcpy(A1.school3, "�����");
	strcpy(A1.school4, "������");
	strcpy(A1.class4, "��ǻ�ͼ���Ʈ������а�");
	strcpy(A1.sex, "����");
	
	A1.age = 20;
	A1.m = 184.4;
	A1.kg = 94.4;

	printf("�̸� : %s\n", A1.name);
	printf("������ �ʵ��б� : %s\n", A1.school1);
	printf("������ ���б� : %s\n", A1.school2);
	printf("������ ����б� : %s\n", A1.school3);
	printf("�ٴϰ� �ִ� ���б� : %s\n", A1.school4);
	printf("�а��̸� : %s\n", A1.class4);
	printf("���� : %s\n", A1.sex);
	printf("���� : %d\n", A1.age);
	printf("Ű : %f\n", A1.m);
	printf("������ : %f\n", A1.kg);
	void (*num)();
		num = number;
		num();

	float num1;

	num1 = BMI(A1.m, A1.kg);

	printf("BMI = %f", num1);
}

