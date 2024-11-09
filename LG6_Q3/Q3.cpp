//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num,res=0;
	double avg,i;

	printf("Enter a value: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {


		res += i;
		

	}
	avg = res / (i-1.0);


	printf("Result is: %d\n Average is: %.2f", res, avg);








	return(0);
}