#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double discPrice, rawPrice;
	char coffeeType, isEspresso;

	printf("Enter coffee type (C/c or H/h): ");
	scanf(" %c", &coffeeType);
	printf("\nEnter price: ");
	scanf("%lf", &rawPrice);

	if (coffeeType == 'c' || coffeeType == 'C') {

		discPrice = rawPrice * .85;

		if (rawPrice >= 30)
			discPrice = rawPrice*.75;

	}

	else if (coffeeType == 'h' || coffeeType == 'H') {

		discPrice = rawPrice * .70;

		printf("Espresso (y/n): ");
		scanf("% c", &isEspresso);

		if (isEspresso == 'y')
			discPrice = discPrice * .85;


	}
	else
		discPrice = rawPrice;

	printf("\nDiscounted price is: %.2f", discPrice);









	return(0);
}