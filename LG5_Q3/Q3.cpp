//Oguzkaan Yilmaz	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <math.h>

int main(void) {


	char letter;

	printf("Enter a character: ");
	scanf(" %c", &letter);

	if (letter >= 97 && letter <= 122)
		printf("\nThe letter '%c' is lowercase character\nThe uppercase form is: %c", letter, letter - ('a' - 'A'));
	else if (letter >= 65 && letter <= 90)
		printf("\nThe letter '%c' is uppercase character\n The lowercase form is: %c", letter, letter + ('a' - 'A'));
	else
		printf("%c is not a character!!");


	


	return(0);
}