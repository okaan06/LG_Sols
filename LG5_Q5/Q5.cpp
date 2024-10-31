#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double price, years,insurance,base;
	char gender, accident;

	printf("Enter the information of the driver;\nCar price: ");
	scanf("%lf", &price);
	printf("Gender: ");
	scanf(" %c", &gender);
	printf("Years: ");
	scanf("%lf", &years);
	printf("Do you have any accident(Y-y/N-n): ");
	scanf(" %c", &accident);


	base = price * .1;

	if (gender == 'm' ||gender== 'M') {

		if (years <= 20)

			base = base * 0.96;

		else

			base = base * 0.94;
	}


	

	else if (gender == 'f' ||gender== 'F') {

		if (years <= 10)

			base = base * 0.95;

		else

			base = base * 0.93;
	}




	if (accident == 'n' ||accident== 'N') 
		{
			base = base * 0.9;
			printf("The cost of the insurance is $ %.1lf", base);
		}

	else 
		printf("The cost of the insurance is $ %.1lf", base);
	
	



	return(0);
}