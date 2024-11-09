#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{

	int x, y=0, z,i;

	printf("Enter int: ");
	scanf("%d", &x);

	for (i = 1; i < x; i++) {

		if (x % i == 0)
			y += i;


	}

	if (y == x)
		printf("yessss");
	else
		printf("bruhh");


	return(0);
}