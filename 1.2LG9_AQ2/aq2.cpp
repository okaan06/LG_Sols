#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* file;
typedef struct {
	char firstname[30];
	char lastname[30];
}name_t;
typedef struct {
	name_t name;
	char date[50];
	char brand[50];

}info_t;
int main() {
	file = fopen("customers.txt", "r");
	info_t info[10];
	int i = 0,namelen;

	while(fscanf(file,"%s %[^-]--%[0-9/]--%[^\n]",info[i].name.firstname,info[i].name.lastname,info[i].date,info[i].brand)!=EOF)
	{
		i++;
	}

	printf("AWARD WINNERS\n");
	for (int j = 0; j < i; j++)
	{
		namelen = strlen(info[j].name.firstname)+strlen(info[j].name.lastname);
		if(namelen>12)
		{
			printf("%c. %s %.*s %s\n", info[j].name.firstname[0], info[j].name.lastname,5, info[j].date, info[j].brand);
		}
		else
		{
			printf("%s %s %.*s %s\n", info[j].name.firstname, info[j].name.lastname,5, info[j].date, info[j].brand);
		}
	}



		


	return 0;



}