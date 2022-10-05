//lab #1, calculate price
//0921Lab1.cpp , 2022-09-21
//202234880 Kim taewoo
#include <stdio.h>

//accepts amount, weight, price array and calculate price array with weight,amount.
void calculate(float amount[], float weight[], float price[]) {
	for (int i = 0; i < 3; i++) {
		price[i] = amount[i] * weight[i];//price=amount*weight
	}
}

//accepts price array and prints them.
void show(float price[]) {
	for (int i = 0; i < 3; i++) {//0~2
		printf("price[%d] : %.2f\n",i, price[i]);
	}
}

//main function.
int main(){
	float amount[3] = { 10.62, 14.89, 13.21 };
	float weight[3] = { 4, 8.5, 6 };
	float price[3] = { 0, };
	
	calculate(amount, weight, price);//throw array's first address.
	show(price);
	return 0;
}