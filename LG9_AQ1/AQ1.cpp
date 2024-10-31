#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	char symbol;
	int sideLenght,i,j;

	printf("Enter a character(! to stop): ");
	scanf("%c", &symbol);
	

	while (symbol != '!') {

		do {
			printf("Enter the side lenght(4-10): ");
			scanf("%d", &sideLenght);



		} while (sideLenght<4 || sideLenght>10);

		printf("\n");

		for (i = 1; i <= sideLenght; i++) {

			for (j = 1; j <= sideLenght - i; j++)
				printf(" ");
			for (j = 1; j <= i; j++)
				printf("%c", symbol);
			for (j = 2; j <= i; j++)
				printf("%c", symbol);
			

			printf("\n");


		}
		for (i = 1; i <= sideLenght - 1; i++) {
			for (j = 1; j <= i; j++)
				printf(" ");
			for (j = 1;j<= sideLenght - i; j++)
				printf("%c", symbol);
			for (j = 2; j <= sideLenght - i; j++)
				printf("%c", symbol);

			printf("\n");


		}


		printf("\nEnter a character(! to stop): ");
		scanf(" %c", &symbol);
		

	}


	return(0);
}