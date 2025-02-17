#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;
int menu() {
	int choice;
	printf("\nMenu:\n");
	printf("1) Display character info\n2) Update stenght of all characters\n3) Find id of character with lowest dex\n4) Find id of character with highest int\n5) Display all characters\n6) Calculate armor ratings\n7) Exit\n ");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	return choice;

}
void displayCharInfo(int arr[][4],int id) {
	for(int i=0;i<6;i++)
		if (arr[i][0] == id) {
			printf("\nID: %d,Strenght: %d, Dexterity: %d, Intelligence: %d", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);

		}




}
void updateStrenght(int arr[][4]) {
	int num;
	printf("Enter the number to increase strenght by: ");
	scanf("%d", &num);
	for (int i = 0; i < 6; i++)
		arr[i][1] += num;
	printf("\nStrength updated.");




}
int findLowestDex(int arr[][4]) {
	int min = 999,minx;
	for (int i = 0; i < 6; i++)
		if (arr[i][2] < min) {
			minx = i;
			min = arr[i][2];
		}


	return minx;


}
int findHighestInt(int arr[][4]) {
	int max = -1, maxx=0;
	for (int i = 0; i < 6; i++)
		if (arr[i][3] > max) {
			maxx = i;
			max = arr[i][3];
		}


	return maxx;


}
void displayAll(int arr[][4]) {
	printf("\nID   Strenght       Dexterity      Intelligence\n");
	for (int i = 0; i < 6; i++) {

		for (int j = 0; j < 4; j++)
			printf("%d         ", arr[i][j]);

			printf("\n");

}
	}
int main() {
	int arr[6][4],id,index;
	file1 = fopen("info.txt", "r");
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 4; j++)
			fscanf(file1, "%d", &arr[i][j]);


	int choice=menu();
	while (choice != 7) {

	switch (choice) {

	case 1:
		printf("\nEnter character ID to display info: ");
		scanf("%d", &id);
		displayCharInfo(arr, id);
		break;
	case 2:
		updateStrenght(arr);
		break;
	case 3:
		index = findLowestDex(arr);
		printf("\nCharacter with lowest dex has ID: %d", arr[index][0]);
		break;
	case 4:
		index = findHighestInt(arr);
		printf("\nCharacter with highest int has ID: %d", arr[index][0]);
		break;
	case 5:
		displayAll(arr);



	}
	choice = menu();
	}


	return 0;















}