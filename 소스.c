#include <stdio.h>
void main()
{
	int n = 0, hap = 0;

	for (n = 0;  n <= 10; n++) {
		hap += n;
	}
	printf("for���� �̿��� ���\n 0���� 10������ ����:%d�Դϴ�",hap);
    n = 0, hap = 0;

	while ( n <= 10) {
		hap += n;
		n++;
	}
	printf("\nwhile���� �̿��� ���\n 0���� 10������ ����:%d�Դϴ�", hap);
	n = 0, hap = 0;

	do {
		hap += n;
		n++;
	} while (n <= 10);
	printf("\ndo while���� �̿��� ���\n 0���� 10������ ����:%d�Դϴ�", hap);

}





