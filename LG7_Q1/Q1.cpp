//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {

	double y, i, res = 0,x;

	printf("Enter the value for y: ");
	scanf("%lf", &y);

	for (i = 1; i <= 56; i++) {

		x = pow(y, i) / (2 * i);
		res += x;



	}

	printf("The result is: %.2f", res);










	return(0);
}