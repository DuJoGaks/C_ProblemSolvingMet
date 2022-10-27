//202234880 Kimtaewoo
//Exercise 2, p21 Read/Write File
#include <stdio.h>
#include <stdlib.h>


struct CAR {
	char name[20];
	int year;
	double price;
};

int main() {
	struct CAR car[4] = { {"Avantae",2007,13000.0},{"Sonata",2008,18000.0},{"SM7",2009,22000.0},{"Equus",2010,35000.0} };
	FILE* out = fopen("cars.txt", "w");
	if (out == NULL) {
		printf("File open error!\n");
		exit(1);
	}
	fprintf(out,"Name       | Year      | Price     |\n");
	for (int i = 0; i < 4; i++) {
		fprintf(out, "%-10s | %-10d| %-10.2lf|\n", car[i].name, car[i].year,car[i].price);
	}
	fclose(out);

	FILE* in = fopen("cars.txt", "r");
	if (in == NULL) {
		printf("File open error!\n");
		exit(1);
	}
	char tmp[100] = "";
	while(fgets(tmp,100,in)!=NULL){
		printf("%s", tmp);
	}

	fclose(in);
	return 0;
}