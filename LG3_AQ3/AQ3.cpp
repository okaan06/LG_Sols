#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double cow, sheep, horse,total;   //creating variables

	printf("Enter the number of cows: ");  //taking input for cow,horse,and sheep
	scanf("%lf", &cow);
	printf("Enter the number of sheep: ");
	scanf("%lf", &sheep);
	printf("Enter the number of horses: ");
	scanf("%lf", &horse);


	total = cow + sheep + horse;  //calculating the total nuber of animals

	printf("The angle of the cows is: %0.2f\n", 360 * cow / total);     //displaying the result
	printf("The angle of the sheep is: %0.2f\n", 360 * sheep / total);
	printf("The angle of the horses is: %0.2f", 360 * horse / total);

	return(0);
}