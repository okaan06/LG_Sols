#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
FILE* file1;

int readFromFile(FILE* file1, int id[], double rate[], char genre[]) {

    int k = 0;

    while (fscanf(file1, "%d %lf %c", &id[k], &rate[k], &genre[k]) != EOF) {
        k++;



    }


    return k;

}

void displayBook(int id, double rate, char genre) {

    printf("\n%d %.1f ", id, rate);

    if (genre == 'F')
        printf("Fiction");
    else if (genre == 'N')
        printf("Non-Fiction");
    else if (genre == 'M')
        printf("Mystery");

}

void display(int id[], double rate[], char genre[], int books) {

    for (int k = 0; k < books; k++)
        displayBook(id[k], rate[k], genre[k]);



}
int searchBook(int id[], int books, int bookid) {

    for (int k = 0; k < books; k++)
        if (bookid == id[k])
            return k;
    return -1;


}

int main(void) {

    int id[30], books, bookid, target;
    double rate[30];
    char genre[30];

    file1 = fopen("books.txt", "r");

    books = readFromFile(file1, id, rate, genre);




    printf("There are %d books in the array.", books);
    display(id, rate, genre, books);


    do {
        printf("\nEnter a book ID to search (negative to stop): ");
        scanf("%d", &bookid);
        target = searchBook(id, books, bookid);
        if (target == -1)
            printf("The searched book ID %d is NOT found", bookid);
        else
            displayBook(id[target], rate[target], genre[target]);

    } while (bookid > 0);







    return 0;
}