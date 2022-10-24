#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE* infile;
	char line[100];
	int lcount = 0;
	
	if ((infile = fopen("charstream.txt", "r")) == NULL) {
		printf("File open err\n");
		exit(1);
	}
	while (fgets(line, sizeof(line), infile) != NULL) {
		lcount++;
		printf("Line %d : %s", lcount, line);
	}
	fclose(infile);
}