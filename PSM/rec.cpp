#include <Stdio.h>

int rec(int arr[], int n) {
	if (n == 1) return arr[0];
	int max = rec(arr, n - 1);
	if (max < arr[n - 1]) return arr[n - 1];
	else return max;
}

int puzzle(int n) {
	if (n == 1) return 1;
	if (n % 2 == 0) {
		printf("%d\n", n);
		return (puzzle(n / 2) + n);
	}
	else return (puzzle(3 * n + 1));
}
int main() {
	int arr[5] = { -1,557,4,20,11 };
	printf("%d\n", puzzle(6));
}

/*
puzzle(6)
	puzzle(3)+6
		puzzle(10)
			puzzle(5)+10
				puzzle(16)
					puzzle(8)+16
						puzzle(4)+8
							puzzle(2)+4
								puzzle(1)+2
									puzzle(1)
									1
								3
							5
						13
					29
				29
			39
		45
	2????
*/