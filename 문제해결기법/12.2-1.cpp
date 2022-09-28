//12.2 1 Month and Days
//202234880 Kimtaewoo
//2022-09-26
#include <Stdio.h>

struct MonthDays {
	char name[10];
	int days;
};

int main() {
	struct MonthDays convert[12] = { {"January",31},{"February",28},{"March",31},{"April",30},
		{"May",31},{"June",30},{"July",31},{"August",31},{"September",30},
		{"October",31},{"November",30},{"December",31} };
	
	//prints struct convert
	for (int i = 0; i < 12; i++) {
		printf("%s : %d days\n", convert[i].name, convert[i].days);
	}
	return 0;
}
