#include <stdio.h>
void main()
{
	float i = 1.5; 
	double square(double); /* 호출함수에서도double로선언*/ 
	
	while (i < 256.0)
	{
		printf("--%f \n", i);
		printf(" %lf \n", i= square(i));
	} 
} 

double square(double x ) /*함수의머리부분에서함수의자료형을double로선언*/ 
{ 
	return(x*x);
}