#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1,*file2;
int main() {

	file1 = fopen("grades.txt", "r");
	file2 = fopen("average.txt", "w");

	double grades[10][6],averagesid[10],sum=0,avg=0;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 6; j++)
			fscanf(file1, "%lf", &grades[i][j]);


	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 6; j++) 
			sum += grades[i][j];



		
			avg = sum / 5.0;

			averagesid[i] = avg;
			sum = 0;
			avg = 0;
			fprintf(file2, "%.0f   %.2f\n", grades[i][0], averagesid[i]);
	}
	printf("Quiz Number      Average\n");

	for (int i = 1; i < 6; i++) {
		for (int j = 0; j < 10; j++) 
			sum += grades[j][i];

		avg = sum / 10.;
		printf("%d               %.2f\n", i, avg);
		avg = 0;
		sum = 0;
		


	}














	return 0;
}