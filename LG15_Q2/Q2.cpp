#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE *file1;

int dispMenu() {
    int choice;
    do {

    printf("\n1. Display Salaries\n2. Display Average Salaries\n3. Display Employee Info\n 4. Exit\nEnter your choice: ");
    scanf("%d", &choice);
    } while (choice > 4 || choice < 1);
    return choice;

}
void displaySalaries(int id[],int salary[],int size) {
    int k;
    for (k = 0; k < size; k++)
        printf("%d %d\n", id[k], salary[k]);




}
void displayAverages(char gender[], int salary[],int size) {

    int k;
    double m=0,f=0,msum=0,fsum=0, avg;

    for (k = 0; k < size; k++) {
        if (gender[k] == 'M') {
            msum += salary[k];
            m++;
        }
        else {
            fsum += salary[k];
            f++;
        }

    }


    printf("Average salary for males: %.0f", msum / m);
    printf("\nAverage salary for females: %.0f", fsum / f);
    printf("\nAverage for all: %.0f", (msum + fsum) / (m + f));

}
int findEmployee(int id[], int size,int target) {
    for (int k = 0; k < size; k++)
        if (target == id[k])
            return k;
        return -1;

}

int main(void) {
    int choice,id[100],age[100],salary[100],k=0,targetid,target;
    char gender[100];
    file1 = fopen("employees.txt", "r");
    while (fscanf(file1, "%d %c %d %d", &id[k], &gender[k], &age[k], &salary[k]) != EOF) {
        k++;
    }

    choice=dispMenu();

    while (choice != 4) {
        switch (choice) {

        case 1:
            displaySalaries(id, salary, k);
            break;
        case 2:
            displayAverages(gender, salary, k);
            break;
        case 3:
            printf("Enter emloyee id: ");
            scanf("%d", &targetid);
            target=findEmployee(id, k, targetid);
            if (target == -1)
                printf("Employee not found!");
            else
                printf("Employee info:\nID  : %d\nGender: %c\nAge: %d\nSalary: %d",id[target],gender[target],age[target],salary[target]);

        }


        choice = dispMenu();



    }





    return 0;
}