#include <Stdio.h>
#include <stdlib.h>

void main() {
	int a, sum = 0;
	FILE* inFile, * outFile;
	
	inFile = fopen("myInFile.txt", "r");
	outFile = fopen("myOutFile.txt ", "w");
	if (inFile == NULL || outFile == NULL) {
		printf("File Open ERR\n");
		exit(1);
	}
	
	while (fscanf(inFile, "%d", &a) == 1) {
		sum = sum + a;
	}
	fprintf(outFile, "The sum is %d\n", sum);
	fclose(inFile);
	fclose(outFile);
	
}