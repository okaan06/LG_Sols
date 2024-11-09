//Name and Surname: Oðuzkaan Yýlmaz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char lowercase, uppercase;

	printf("Enter the lowercase from of any letter: ");
	scanf(" %c", &lowercase);
	printf("\nENter the uppercase form of any letter: ");
	scanf(" %c", &uppercase);

	printf("\nASCII code of the lowercase form is: %d", lowercase);
	printf("\nASCII code of the uppercase form is: %d", uppercase);


	printf("\nThe difference between two codes is %d", lowercase - uppercase);














	return(0);
}