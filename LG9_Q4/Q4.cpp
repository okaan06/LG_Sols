#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

	int num, i, j, k, l,choice;
	
	printf("     MENU\n-------------------\n1.Right Triangle\n2. Isosceles Triangle\n3. EXIT\nEnter your choice: ");
	scanf("%d", &choice);

	while (choice != 3) {

		srand(time(NULL));
		num = rand() % 7 + 3;
		printf("\nRandomly generated number is: %d\n", num);

		switch (choice) {

		case 1: 
			for (i = 1; i <= num; i++) {

				for (j = 1; j <= num - i; j++)
					printf(" ");

				for (j = i; j >=1; j--)
					printf("%d", j);

				printf("\n");

			}

			break;

		case 2: 
			for (i = 1; i <= num; i++) {
				for (j = 1; j <= num - i; j++)
					printf(" ");

				for (j = i; j >= 1; j--)
					printf("%d", j);
				for (j=2; j <= i; j++)
					printf("%d", j);

				printf("\n");
			}




		}

		printf("     MENU\n-------------------\n1.Right Triangle\n2. Isosceles Triangle\n3. EXIT\nEnter your choice: \n");
		scanf("%d", &choice);

	}


	




	return(0);



}
