#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{

	double x, res=0, sum=0;
	int div, mult = 2;

	printf("Enter the value of x: ");
	scanf("%lf", &x);

	for (div = 1; div <= 10; div++) {


		res = sqrt(mult * x) / (div);

		if (div%2 == 0)

			sum = sum - res;
		else

			sum = sum + res;

		mult++;

	}

	printf("The result is: %0.3f ",sum);


	return(0);
}