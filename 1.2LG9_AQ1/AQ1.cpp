#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char ext[10];
	char desc[100];

}info_t;
int readFromFile(FILE* file, info_t* info) {
	int i = 0;
	while (fscanf(file, "%s %[^\n]", info[i].ext, info[i].desc) != EOF) {
		i++;
	}
	return i;
}
int search(info_t* info, char* ext, int num) {
	for (int i = 0; i < num; i++) {
		if (strcmp(info[i].ext, ext) == 0) {
			return i;
		}
	}
	return -1;
}
int main() {
	FILE* file1;	
	file1 = fopen("extensions.txt", "r");
	info_t info[200];
	char website[100],ext[10];
	int maxnumber = readFromFile(file1, info);


	printf("Enter a website URL: ");
	scanf("%s", website);

	
	int lenght = strlen(website)-4,b=0,index;

	while (strncmp(website + lenght, ".", 1) != 0) {
		lenght--;
		b++;
	}

	strncpy(ext, website + lenght+1,b);
	ext[b] = '\0';
	index = search(info, ext, maxnumber);

	printf("Extension: %s\nDescription: %s\n", info[index].ext, info[index].desc);


	return 0;
}