#include <stdio.h>
void main()
{
	float i = 1.5; 
	double square(double); /* ȣ���Լ�������double�μ���*/ 
	
	while (i < 256.0)
	{
		printf("--%f \n", i);
		printf(" %lf \n", i= square(i));
	} 
} 

double square(double x ) /*�Լ��ǸӸ��κп����Լ����ڷ�����double�μ���*/ 
{ 
	return(x*x);
}