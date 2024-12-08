//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;

void display(int code) {
	switch (code) {

	case 0:
		printf("White");
		break;
	case 1: 
		printf("Black");
		break;
	case 2: 
		printf("Red");
		break;
	case 3: 
		printf("Blue");
		break;
	case 4: 
		printf("Green");
		break;
	case 5:
		printf("Yellow");
		break;
	case 6:
		printf("Purple");
		break;
	case 7:
		printf("Orange");
		break;
	case 8:
		printf("Pink");
		break;
	case 9:
		printf("Gray");
		break;

	}
}
int main(void) {
	int k = 0,arr[100]={0}, i, cnt = 0;

	file1 = fopen("bag.txt", "r");



	while (fscanf(file1, "%d", &i) != EOF) {
		cnt++;
		arr[i]++;




	}
	printf("COLOUR  CODE  NUMBER  PERCENTAGE TO TOTAL\n");
	for (i = 0; i < 10; i++) {
		display(i);
		printf("   %d     %d      %f\n",i,arr[i],arr[i]*100.0/cnt);
	}
















	return 0;
}