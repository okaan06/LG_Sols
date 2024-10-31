#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int x, y, z;               //let x=-5,y=1,z=3
	double result;
	printf("Enter the value for x: ");
	scanf("%d", &x);
	printf("Enter the value for y: ");
	scanf("%d", &y);
	printf("Enter the value for z: ");
	scanf("%d", &z);

	result = fabs(pow(pow(x,3)/pow(y,4/5)+sqrt(fabs(x+z)/sqrt(y)), 3));

	printf("The result is %0.1f",result);

	return(0);
}