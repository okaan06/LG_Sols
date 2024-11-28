//Oguzkaan yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1,*file2;

int isPalindrome(char arr[], int lenght) {
	for (int i = 0; i < lenght / 2; i++) {
		if (arr[i] != arr[lenght - i - 1])
			return 0;

	}
	return 1;
}
void writeIntoFile(FILE *file,char arr[],int lenght) {
	for (int i = 0; i < lenght; i++)
		fprintf(file, "%c", arr[i]);
	fprintf(file, " ");
}
int main(void) {

	int i, j,k=0;
	char arr[100];
	file1 = fopen("words.txt", "r");
	file2 = fopen("palindromes.txt", "w");

	if (file1 == NULL) {
		printf("File error.");
		return 0;
	}
	else {

		int status = fscanf(file1, "%c", &arr[k]);
		while (status!= EOF) {


			if (arr[k] == ' ' || arr[k] == '\n') {

				if (isPalindrome(arr, k) == 1)
					writeIntoFile(file2,arr,k);

				k = -1;
			}

			k++;

			status = fscanf(file1, "%c", &arr[k]);


		}




	}





	return 0;
}