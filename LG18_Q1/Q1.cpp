#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void display(int arr[][9]) {

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++)
			printf("%d\t", arr[i][j]);
	printf("\n");
	}



}
void fillPattern(int arr[][9], int dimension) {
	int dim2 = dimension / 2;
	for (int i = 0; i <= dim2; i++) {
		for (int j = dim2-i; j <= dim2+i; j++)
			arr[i][j] = 1;



	}




}
int main() {
	srand(time(NULL));

	int num = rand()%9 + 1;
	while (num % 2 == 0)
		num = rand() % 9 + 1;
	
	
	printf("Randomly generaeted number is : %d\n", num);

	int arr[9][9] = { 0 };
	fillPattern(arr, num);
	display(arr);









	return 0;



}