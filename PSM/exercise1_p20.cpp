//202234880 Kimtaewoo
//Exercise 1, p20 Read/Write File
#include <stdio.h>
#include <stdlib.h>


struct CAR {
	char name[20];
	int year;
};

int main() {
	struct CAR car[20] = { {"Avantae",2007},{"Sonata",2008} };
	FILE* out = fopen("cars.txt", "w");
	if (out == NULL) {
		printf("File open error!\n");
		exit(1);
	}
	for (int i = 0; i < 2; i++) {
		fprintf(out, "%s %d", car[i].name, car[i].year);
	}
	fclose(out);
	
	FILE* in = fopen("cars.txt", "r");
	if (in ==NULL){
		printf("File open error!\n");
		exit(1);
	}
	for (int i  =   0 ;i< 2;i++){
		fscanf(in, "%s %d", car[i].name, &car[i].year);
		printf("%s %d\n", car[i].name, car[i].year);
	}
	
	fclose(in);
	return 0;
}