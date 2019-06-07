#include<stdio.h>
#include<stdlib.h>

struct team1
{
	int num1;
	char c1;
	float num2;
	float *f1;
	double num3;
};

typedef struct team2
{
	int num7;
	char c3;
	float num8;
	double num9;
}inji;
	
typedef struct
{
	int num4;
	char c2;
	float num5;
	double num6;
}minji;

int main()
{
	float na_mi_war_ha_ji_ma = 2.2222222;
	struct team1 a;
	struct team1 *ptr1 = malloc(sizeof(float));
	a.num1 = 1;
	a.c1 = 'a';
	ptr1->num2 = &na_mi_war_ha_ji_ma;
	a.num2 = 2;
	a.num3 = 3;

	inji b;
	inji *ptr2 = malloc(sizeof(float));
	b.num7 = 7;
	b.c3 = 'b';
	ptr2 = &b.num8;
	b.num8 = 8;
	b.num9 = 9;

	minji c;
	minji *ptr3 = malloc(sizeof(float));
	c.num4 = 4;
	c.c2 = 'c';
	ptr3 = &c.num5;
	c.num5 = 5;
	c.num6 = 6;

	printf("%d %c %.1f %d\n%d %c %.1f %d\n%d %c %.1f %d\n"
		, a.num1, a.c1, ptr1->num2, a.num3, b.num7, b.c3, *ptr2, b.num9, c.num4, c.c2, ptr3, c.num6);

}