#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int age, choice,ticketsBefore=0;
	char yesno;
	double bill=0, totalBill=0;

	
		printf("\nMOVIE TICKET BOOKING\n-------------------\n1.Regular Ticket\n2.VIP Ticket\n3.Child Ticket (age 6-12)\n4. EXIT\nEnter your choice: ");
		scanf("%d", &choice);
		while (choice != 4) {


			switch (choice) {

			case 1: printf("Regular Ticket");
				bill = 450;
				break;

			case 2: printf("VIP Ticket");
				bill = 900;
				break;

			case 3: printf("Child Ticket\nEnter age: ");
				scanf("%d", &age);
				if (age < 6) {
					bill = 0;
					printf("Free ticket for children aged 0-5");
				}
				else
					bill = 150;
				break;

			}

			
			
			if (bill != 0) {

				printf("\nIs the booking done before the deadline? (y/n): ");
				scanf(" %c", &yesno);

				if (yesno == 'y') {
					bill = bill * .85;
					ticketsBefore += 1;
				}

			}
		

			totalBill += bill;

			printf("\nBooking succesful! Payment: %.2f", bill);

			printf("\nMOVIE TICKET BOOKING\n-------------------\n1.Regular Ticket\n2.VIP Ticket\n3.Child Ticket (age 6-12)\n4. EXIT\nEnter your choice: ");
			scanf("%d", &choice);


		}


	printf("\nTotal booking amount: %.2f\nNo of tickets sold with an early payment discount: %d", totalBill, ticketsBefore);




























	return(0);
}