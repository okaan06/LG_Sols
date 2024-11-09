//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {

	int min = 129301283, max = -1,score;





	printf("Enter the scores(negative to stop): ");
	scanf("%d", &score);

	while (score >= 0) {

		if (score < min)
			min = score;


		if (score > max)
			max = score;

		scanf("%d", &score);
	}

	printf("max: %d\n min: %d", max, min);








	return(0);
}