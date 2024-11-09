//Oðuzkaan Yýlmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double factorial(int x) {
	int i;
	double sum=1;
	for (i = 1; i <= x; i++)
		sum *= i;


	return sum;
}
double permutation(int x, int y) {
	double sum=factorial(x) / factorial(x - y);
	return sum;

}
double combination(int x, int y) {

	double sum = permutation(x, y) / factorial(y);
	return sum;

}

int main() {
	int n, k;
	double permu, combi;
	do {
		printf("Enter n value: ");
		scanf("%d", &n);
	} while (n <= 0);
	do {
		printf("\nEnter k value: ");
		scanf("%d", &k);

	} while (n<k||k<=0);

	permu= permutation(n, k);
	combi = combination(n, k);

	printf("P(%d,%d) = %f",n,k,permu);
	printf("\nC(%d,%d) = %f", n, k, combi);












	return 0;
}