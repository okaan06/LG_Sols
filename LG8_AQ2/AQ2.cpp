#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {


	int i, j,n,m,a,b,num;

	srand(time(NULL));
	num = rand()%11 + 5;

	printf("Randomly generated number is %d\n", num);

	for (i = 1; i <= num; i++) {

		for (j = 1; j <= i; j++)
			printf("*");

		printf("\n");

	}
	printf("\n");

	for (n = 1; n <= num; n++) {
		for (m = 1; m <= num; m++)
			printf("*");

			printf("\n");

	}

	printf("\n");

	for()




























}