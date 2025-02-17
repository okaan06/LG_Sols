#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isEqual(char w1[], int c1, char w2[], int c2) {
	int max = c1;
	if (c2 > c1)
		max = c2;
	for (int i = 0; i < max; i++)
		if (w1[i] != w2[i])
			return i;
	return -1;


}
void display(char arr[], int cnt) {
	for (int i = 0; i < cnt; i++)
		printf("%c", arr[i]);
}
int main() {

	char w1[100], w2[100],letter;
	int cnt1=0, cnt2=0;

	printf("Enter first word: ");
	scanf("%c", &letter);
	while (letter != '\n') {
		w1[cnt1] = letter;
		cnt1++;
		scanf("%c", &letter);


	}
	printf("\nEnter second word: ");
	scanf("%c", &letter);
	while (letter != '\n') {
		w2[cnt2] = letter;
		cnt2++;
		scanf("%c", &letter);


	}
	int index = isEqual(w1, cnt1, w2, cnt2);
	if (index >= 0) {
		display(w1, cnt1);
		printf(" and ");
		display(w2, cnt2);
		printf(" are NOT the same words.\nFirst different character in between was after the character #%d", index);



	}
	else {
		display(w1, cnt1);
		printf(" and ");
		display(w2, cnt2);
		printf(" are the same words.");

	}
























	return 0;
}