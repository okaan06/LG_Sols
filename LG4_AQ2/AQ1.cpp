#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{

	char dig1,dig2,dig3,dig4,dig5;
	int totaldec, dec1,dec2,dec3,dec4,dec5,digit1,digit2; //creating variables
	printf("Enter a binary number: ");
	scanf("%c%c%c%c%c", &dig1, &dig2, &dig3, &dig4, &dig5);  //taking inputs

	
	if (dig1 == '1') 
		dec1 = 1 * powf(2, 4);   //giving value to variables
	else 
		dec1 = 0 * powf(2, 4);
	if (dig2 == '1')
		dec2 = 1 * powf(2, 3);
	else  
		dec2 = 0 * powf(2, 3);
	if (dig3 == '1')
		dec3 = 1 * powf(2, 2);
	else  
		dec3 = 0 * powf(2, 2);
	if (dig4 == '1')
		dec4 = 1 * powf(2, 1);
	else 
		dec4 = 0 * powf(2, 1);
	if (dig5 == '1')
		dec5 = 1 * powf(2, 0);
	else 
		dec5 = 0 * powf(2, 0);

	totaldec = dec1 + dec2 + dec3 + dec4 + dec5;
	printf("Decimal equivalent: %d\n",totaldec); //displaying the results

	digit1 = totaldec / 10;
	digit2 = totaldec % 10;

	printf("Digits of the decimal number: %d and %d\n",digit1,digit2);
	printf("Sum of its digits: %d ",digit1+digit2 );




	return(0);
}