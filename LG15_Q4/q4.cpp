//Oguzkaan yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1, * file2, * file3;

 void readFromFile(FILE* file, char arr[]) {
	 for (int k = 0; fscanf(file, "%c", &arr[k]) != EOF; k++);

}
 int findLetterIndex(char arr[], char target) {
	 for (int i = 0; i < 26; i++) {
		 if (arr[i] == target)
			 return i;
	 }
}
 void decipherChar(FILE* file, char arr[], char ch) {
	 int target= findLetterIndex(arr, ch);
	 if (ch == ' ')
		 fprintf(file, " ");
	 else
	 fprintf(file, "%c", 'a' + target);

 }
 int main(void) {

	 char key[100],ch;
	 file1 = fopen("key.txt", "r");
	 file2 = fopen("ciphered.txt", "r");
	 file3 = fopen("deciphered.txt", "w");

	 readFromFile(file1, key);

	 while (fscanf(file2, "%c", &ch)!=EOF) {

		 

		 decipherChar(file3, key, ch);




	}



	 return 0;
 }