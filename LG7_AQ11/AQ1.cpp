//Oguzkaan Yilmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {


	double x, z, res=0, i,sign=1;

	printf("Enter x:");
	scanf("%lf", &x);

	for (i = 1; i <= 10; i++) {


		z = sqrt((i + 1) * x) / i*sign;
		res += z;
		sign *= -1;


	}

	printf("res: %.3f", res);










	return(0);
 }