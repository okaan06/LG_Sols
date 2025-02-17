#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
FILE *file;
typedef struct {
	int roomNo;
	char roomType;

}roomInfo_t;

typedef struct {
	char name[30];
	int birthYear;
	int day;
	double payment;
	roomInfo_t roomInfo;


}info_t;

void readFromFile(FILE* file, info_t* info,int num) {

	file = fopen("customers.txt", "r");

	int i = 0;
	for(int i=0;i<num;i++) {

		fscanf(file, "%s %d %d %d %c", info[i].name, &info[i].birthYear, &info[i].day, &info[i].roomInfo.roomNo, &info[i].roomInfo.roomType);


		switch (info[i].roomInfo.roomType) {
		case 'S':
			info[i].payment = 1000 * info[i].day;
			break;
		case 'T':
			info[i].payment = 2500 * info[i].day;
			break;
		case 'D':
			info[i].payment = 3500 * info[i].day;
			break;

		}




	
	}


}
void display(info_t* info,int num) {
	

	
	printf("Name       BYear    Day    Room Num     Type      Payment\n----------------------------------------------------------\n");

	for (int i = 0; i < num; i++) {
		printf("%s          %d      %d      %d       %c      %f\n", info[i].name, info[i].birthYear, info[i].day, info[i].roomInfo.roomNo, info[i].roomInfo.roomType, info[i].payment);


	}

}

double calculateTotalEarnings(info_t* info, int num) {
	double sum = 0;

	for (int i = 0; i < num; i++) {
		sum += info[i].payment;

	}

	return sum;

}
int  findCustomerMaxPayment(info_t* info, int num) {
	int max = -1,index;
	for (int i = 0; i < num; i++) {
		if (info[i].payment > max) {
			max = info[i].payment;
			index = i;

		}
	}
	return index;


}
int main() {
	srand(time(NULL));
	int num = rand() % 16 + 5;
	int index;
	info_t* info = (info_t*)malloc(num * sizeof(info_t));

	readFromFile(file,info,num);
	printf("%d customers' info will be read: \n",num);
	display(info, num);
	printf("\nTotal earnings of the hotel: %f", calculateTotalEarnings(info, num));
	index = findCustomerMaxPayment(info, num);
	printf("\nCustomer having max payment:\n%s with the price %f", info[index].name, info[index].payment);


	return 0;

}