#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;

void displayRowWise(int arr[][5]) {
	printf("\nArray in row-wise format:\n");
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}


}

void displayColumnWise(int arr[][5]) {
	printf("\nArray in column-wise format:\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%d\t", arr[j][i]);

		printf("\n");
	}





}


int main() {


	file1 = fopen("nums.txt", "r");

	int arr[5][5];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			fscanf(file1, "%d", &arr[i][j]);

	displayRowWise(arr);
	displayColumnWise(arr);












	return 0;

}
