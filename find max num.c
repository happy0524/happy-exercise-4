# include <stdio.h>
# include <stdlib.h>
# define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int max;
	int a, b, c;

	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� �� : "); scanf_s("%d", &a);
	printf("\n");
	printf("b�� �� : "); scanf_s("%d", &b);
	printf("\n");
	printf("c�� �� : "); scanf_s("%d", &c);
	printf("\n");

	if (a > b && a > c) {
		max = a;
	}
	else if (b > c) {
		max = b;
	}
	else {
		max = c;
	}

	printf("The biggest value is %d", max);

	return 0;
}