//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;

void display(int day[], int night[]) {
	for (int i = 0; i < 7; i++)
		printf("%d %d\n", day[i], night[i]);

}
int findColdest(int day[]) {
	int i = 0;
	int min=day[i];
	for (i = 0; i < 7; i++) {
		if (day[i] < min) {
			min = day[i];
	return i+1;
		}
	}

}
int main(void) {

	int day[100], night[100];
	file1 = fopen("weather.txt", "r");
	int k = 0;

	while (fscanf(file1, "%d %d", &day[k], &night[k]) != EOF) {
		k++;

	}

	printf("DAY      NIGHT\n");
	display(day, night);

	int cold = findColdest(day);
	printf("The coldest day is %d", cold);

	return 0;
}