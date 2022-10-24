#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	FILE* myFile;
	double price[2] = { 139.25,19.03 };
	char description[][20] = { "glove","CD" };
	
	myFile = fopen("myFile.dat", "w");
	if (myFile == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	else {
		for (i = 0; i < 2; i++) {
			fprintf(myFile, "%-9s %6.2f\n", description[i], price[i]);
		}
		fclose(myFile);
	}
}