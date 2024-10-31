#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{

	double itemPrice, itemWeight, totalPrice;
	char shipMethod;

	printf("Enter the price of the item (in TL): ");
	scanf("%lf", &itemPrice);
	printf("Enter the weight of the item(in KG): ");
	scanf("%lf", &itemWeight);
	printf("Enter the shipping method(S/s for standard,E/e for express,O/o for overnight): ");
	scanf(" %c", &shipMethod);



	if (shipMethod == 's' || shipMethod == 'S')
		if (itemPrice < 200)
			totalPrice = itemPrice + 30 + (int)(itemWeight - 1) * 5;
		else
			totalPrice = itemPrice;

	else if (shipMethod == 'e' || shipMethod == 'E')
		totalPrice = itemPrice + 40 + (int)(itemWeight - 1) * 10;
	else if (shipMethod == 'o' || shipMethod == 'O')
		totalPrice = itemPrice + 60 + (int)(itemWeight - 1) * 15;
	else
		printf("Shipping method unavailable!");
	return(0);

	printf("Total cost is: %0.2f", totalPrice);
	








	return(0);
}