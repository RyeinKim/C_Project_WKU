#include <stdio.h>
void main()
{
	int n = 0, hap = 0;

	for (n = 0;  n <= 10; n++) {
		hap += n;
	}
	printf("for문을 이용한 결과\n 0에서 10까지의 합은:%d입니다",hap);
    n = 0, hap = 0;

	while ( n <= 10) {
		hap += n;
		n++;
	}
	printf("\nwhile문을 이용한 결과\n 0에서 10까지의 합은:%d입니다", hap);
	n = 0, hap = 0;

	do {
		hap += n;
		n++;
	} while (n <= 10);
	printf("\ndo while문을 이용한 결과\n 0에서 10까지의 합은:%d입니다", hap);

}





