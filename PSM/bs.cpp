#include <stdio.h>

int bs(int list[], int lo, int hi, int key) {
	int mid;
	if (lo > hi) return -1;
	mid = (lo + hi) / 2;
	if (list[mid] == key) return 0;
	else if (list[mid] > key)
		return bs(list, lo, mid - 1, key);
	else if (list[mid] < key)
		return bs(list, mid + 1, hi, key);
}

int main(void) {
	int list[5] = { 5,10,15,25,45 };
	printf("%d", bs(list, 0, 4, 11));
}