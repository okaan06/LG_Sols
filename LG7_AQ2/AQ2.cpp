#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{

	int minnum,gcd=1, div,num1,num2;

	printf("Enter the integers: ");
	scanf("%d %d",&num1,&num2);
	if (num1 > num2)
		minnum = num2;
	else
		minnum = num1;



	for (div = 1; div <= minnum; div++) {

		if ((num1 % div==0 && num2 % div==0) == 1)
			gcd = div;

	}


	printf("gcd: %d", gcd);





















	return(0);
}