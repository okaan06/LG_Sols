//Oðuzkaan Yýlmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int a, b, c;
	double e, r,res;

	scanf("%d%d%d%lf%lf", &a, &b, &c, &e, &r);


	res = r + sqrt((c + a * r / b) / (r * a / e)) / ((b + 4.) / e);




	printf("The result is: %.2f", res);




	return(0);
}