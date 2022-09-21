//12.1 2 stocks eps/per
//202234880 kim taewoo
//2022-09-19
#include <stdio.h>

struct stock {
	char name[20];
	float eps;
	float per;
};//struct has name/eps/per
int main() {
		struct stock stock1,stock2,stock3,stock4,stock5;//declare stock1~5
		printf("input stock1 name, earning per share, price to earnings ratio : ");
		scanf("%s %f %f", stock1.name, &stock1.eps, &stock1.per); //input stock1
		printf("%s price : %.2f\n",stock1.name, stock1.eps*stock1.per);//print price
		
		printf("input stock2 name, eps, per : ");
		scanf("%s %f %f", stock2.name, &stock2.eps, &stock2.per);
		printf("%s price : %.2f\n", stock2.name, stock2.eps* stock2.per);
		
		printf("input stock3 name, eps, per : ");
		scanf("%s %f %f", stock3.name, &stock3.eps, &stock3.per);
		printf("%s price : %.2f\n", stock3.name, stock3.eps* stock3.per);
		
		printf("input stock4 name, eps, per : ");
		scanf("%s %f %f", stock4.name, &stock4.eps, &stock4.per);
		printf("%s price : %.2f\n", stock4.name, stock4.eps* stock4.per);
		
		printf("input stock5 name, eps, per : ");
		scanf("%s %f %f", stock5.name, &stock5.eps, &stock5.per);
		printf("%s price : %.2f\n", stock5.name, stock5.eps* stock5.per);
		//while(getchar()!='\n'); //버퍼 안의 \n 지우기!!
		return 0;
}