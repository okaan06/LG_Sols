#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {

	int num, guess, i=1;  //define variables

	srand(time(NULL));

	num = rand() % 51 + 20;  // generate andom number

	printf("Try to guess the number between 20 and 70.\n");  
	printf("\nEnter your guess: ");    //input for guess
	scanf("%d", &guess);
	

	for (i = 1; guess != num; i++) {   // loop start

		
		
		while (guess < 20 || guess>70) { //guess validation
			printf("Please enter a number between 20 and 70.\nEnter your guess: ");
			scanf("%d", &guess);
		}

		if (guess > num)  
			printf("Too high! Try again.");
		else if (guess < num)
			printf("Too low! Try again.");

		printf("\nEnter your guess: ");
		scanf("%d", &guess);




	}
	printf("\nCongrats! You guessed the number correctly!\nIt took you %d attempt(s) to guess the correct number.", i); //display the message for guessing correctly





	return(0);
}