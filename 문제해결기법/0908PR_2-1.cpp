//Computes total pay
//[0907]PracticeResult 2, first exercise
//202234880 kimtaewoo
//2022-09-14
#include<Stdio.h>
#include<string.h>


//totpay function is with 3 array arguments, base, overtime, and total.
//if input is normal, it saves total pay in total array 
void totpay(float base[], float overtime[], float total[]) {
	for (int i = 0; i < 5; i++) {
		if (base[i] < 0 || overtime[i] < 0) {//checks base and overtime array is normal.
			total[i] = -1;
			return;
		}
		total[i] = base[i] + overtime[i];
	}
}

int main() {
	float base[5] = { 0, };
	float overtime[5] = { 0, };
	float total[5] = { 0, };
	memset(base, -1, sizeof(base));			//init base/overtime array by -1
	memset(overtime, -1, sizeof(overtime)); //to detect errors.
	for (int i = 0; i < 5; i++) {
		printf("input base pay and overtime pay :");
		scanf("%f %f", &base[i], &overtime[i]);
	}
	totpay(base, overtime, total);
	for (int i = 0; i < 5; i++) {
		if (total[i] == -1) {
			printf("Err: Check your base/overtime %dth line!\n",i+1);
			return 0;
		}
		printf("%dth total pay : %.3f\n", i+1,total[i]);
	}
	return 0;
}