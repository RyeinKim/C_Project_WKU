#include <stdio.h>

void main() {

	int num[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	printf("%d*%d=%d\n", num[0], num[6], num[0] * num[6]);
	printf("%d*%d=%d\n", num[1], num[5], num[1] * num[5]);
	printf("%d*%d=%d\n", num[2], num[8], num[2] * num[8]);
	printf("%d*%d=%d\n", num[3], num[7], num[3] * num[7]);
	printf("%d*%d=%d\n", num[4], num[9], num[4] * num[9]);

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 9; j++) 
			
		
		printf("%d * %d = %d\n", i, j, i*j);
	}
}