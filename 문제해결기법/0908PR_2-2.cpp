//Calculate N1 and N2
//[0907]PracticeResult 2, second exercise
//202234880 kimtaewoo
//2022-09-16
#include <stdio.h>

//receive integers N1 and N2, and calculates N1*N2, N1/N2, N1%N2, N1+N2, returns 4 results.
//If N2 has 0, return 0, if not, return 1.
int calculate(int* n1, int* n2, int* mul, int* div, int* mod, int* add) {
	if (*n2 == 0) return 0;
	*mul = *n1 * *n2;
	*div = *n1 / *n2;
	*mod = *n1 % *n2;
	*add = *n1 + *n2;
	return 1;
}

int main() {
	int n1, n2;
	int mul, div, mod, add;
	printf("input N1 and N2 : ");
	scanf("%d %d", &n1, &n2);
	if (calculate(&n1, &n2, &mul, &div, &mod, &add) == 0) {//if Divisor is 0, catch error.
		printf("Err: N2 is 0, Can not be diveded by Zero.\n");
		return 0;
	}
	printf("N1*N2 : %d\n", mul);
	printf("N1/N2 : %d\n", div);
	printf("N1%%N2 : %d\n", mod);
	printf("N1+N2 : %d\n", add);
	return 0;
}