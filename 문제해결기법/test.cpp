#include <Stdio.h>
//#define _DEBUGs

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a = 3;
	int b = 5;
	#ifdef _DEBUGs
	printf("%d %d\n", a, b);
	#endif
	int c = sum(a, b);
	printf("%d", c);
	return 0;
}