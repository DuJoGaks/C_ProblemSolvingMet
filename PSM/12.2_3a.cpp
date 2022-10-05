//12.2 3a
//202234880 Kimtaewoo
//2022-09-26
#include <Stdio.h>


struct employee {
	int id;
	char name[10];
	float payRate;
	float hours;
};//3a

int main() {
	struct employee data[6] = {};
	float sum = 0;
	//input employee data
	for (int i = 0; i < 6; i++) {//3b
		printf("Enter employee %d's ID, name, pay rate, and hours worked: ", i + 1);
		scanf("%d %s %f %f", &data[i].id, data[i].name, &data[i].payRate, &data[i].hours);
	}
	//prints employee data
	for (int i = 0; i < 6; i++) {
		sum += data[i].payRate * data[i].hours;
		printf("%d %s `s gross pay : %.3f\n", data[i].id, data[i].name, data[i].payRate* data[i].hours);
	}
	printf("Total gross pay : %.3f", sum);
	return 0;
}