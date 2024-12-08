#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;

void display(int arr[4][4]);
int checkDia(int arr[4][4]);
int isSymmetric(int arr[4][4]);

int main() {
	file1 = fopen("relation.txt", "r");

	int matrix[4][4] = { 0 };
	int n1, n2;

	
	while (fscanf(file1, "%d %d", &n1, &n2) != EOF) {
		matrix[n1 - 1][n2 - 1]++;



}




	display(matrix);
	if (checkDia(matrix))
		printf("\nRelation is reflexive\n");
	else
		printf("\nRelation is NOT reflexive\n");
	if (isSymmetric(matrix))
		printf("\nRelation is symmetric.\n");
	else
		printf("\nRelation is NOT symmetric.\n");



	return 0;
}

void display(int arr[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");



	}



}

int checkDia(int arr[4][4]) {

	for (int i = 0; i < 4; i++) {
		if (arr[i][i] == 0)
			return 0;
			

	}
	return 1;
}

int isSymmetric(int arr[4][4]) {
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j <= i; j++)
			if (arr[i][j] != arr[j][i])
				return 0;

	}

	return 1;

}