# include <stdio.h>
# include <stdlib.h>
# define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int max;
	int a, b, c;

	printf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("\n");
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("\n");
	printf("c의 값 : "); scanf_s("%d", &c);
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