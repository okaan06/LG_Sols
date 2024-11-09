#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int convertToBase(int num, int base) {
	int sum = 0, dig;
	for (int i = 0; num != 0; i++) {
		dig = num % 10;
		sum += pow(base, i) * dig;
		num /= 10;
	}
	return sum;

}
int main(void) {
	int num, base;
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Decimal value of the number %d in base %d is %d", num, base, convertToBase(num, base));


	return 0;
}