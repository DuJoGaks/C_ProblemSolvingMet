//202234880 Kimtaewoo
//calculate total cups
#include <stdio.h>



//calculate totcupptr, gallons, quarts,pints, and cups by read total cups.
void liquid(int cups, int *g, int *q, int *p, int *c) {
	*g = cups / 16;
	*q = (cups % 16) / 4;
	*p = (cups % 4) / 2;
	*c = cups % 2;
}


int main() {
	int totCup = 0;
	int g = 0, q = 0, p = 0, c = 0;
	printf("input Total Cups :");
	scanf("%d",&totCup);
	liquid(totCup, &g, &q, &p, &c);
	printf("%d gallens, %d quarts, %d pints, %d cups \n", g,q,p,c);
	return 0;
}