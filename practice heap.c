#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {

	int i;
	int* pi = &i;

	float f;
	float* pf = &f;

	pi = (int*)malloc(sizeof(int));
	pf = (float*)malloc(sizeof(float));

	if ((pi = (int*)malloc(sizeof(int))) == NULL ||
		(pf = (float*)malloc(sizeof(float))) == NULL) {
		fprintf(stderr, "Insufficient memory");
		exit(EXIT_FAILURE);
	}

	*pi = 1024;
	*pf = 3.14;

	printf("an integer = %d, a float = %f\n", *pi, *pf);

	free(pi);
	free(pf); 

	return 0;
}